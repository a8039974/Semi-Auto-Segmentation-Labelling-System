#include <QFileDialog>
#include <QDateTime>
#include <QMessageBox>
#include <QDesktopWidget>
#include <QColor>
#include <QScreen>
#include <QDebug>
#include <QPainter>
#include <QPaintEvent>
#include<opencv2/opencv.hpp>
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "instruction.h"

static std::string labelName;
static QColor color(0, 0, 0);   // RGB
static QColor color_2(0, 0, 0);
static QPixmap* pixmap;
static QPixmap* pixmap_2;
static int flag = 0;            // image has been loaded or not

QStringList getFileNames(const QString &path);
static QStringList filenames = getFileNames(QString::fromStdString("./images/"));
const int fileSize = filenames.size();
static int index = 1;

//static QPixmap* scaledPixmap;
//static QPixmap* scaledPixmap_2;
QColor getColor(int x, int y);

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->lbl_src->installEventFilter(this);
    ui->lbl_mask->installEventFilter(this);

    ui->horizontalSlider->setMinimum(0);
    ui->horizontalSlider->setMaximum(12);
    ui->horizontalSlider->setValue(6);
    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)),
            this, SLOT(setLineEditValue(int)));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::myDraw(){
    if (flag){
        int x = ui->lbl_src->x();
        int y = ui->lbl_src->y();           // position of lbl_src's top left corner
        int w = ui->lbl_src->width();
        int h = ui->lbl_src->height();

        *pixmap = pixmap->scaled(w, h, Qt::KeepAspectRatio);
        QPainter painter(pixmap);
        color_2 = color;
//        color = QColor(int(color.red()*0.5), int(color.green()*0.5), int(color.blue()*0.5));

        painter.setPen(QPen(color, ui->horizontalSlider->value(), Qt::DotLine));
        painter.setBrush(color);


        int x1 = this->geometry().x();
        int y1 = this->geometry().y();      // position of the window

        int x2 = QCursor::pos().x();
        int y2 = QCursor::pos().y();        // position of the cursor

        painter.setRenderHint(QPainter::Antialiasing,true);
        int new_x = x2-x1-x;
        int new_y = y2-y1-y;
        painter.drawPoint(x2-x1-x, y2-y1-y);
        ui->lbl_src->setPixmap(*pixmap);
        color = color_2;


        *pixmap_2 = pixmap_2->scaled(w, h, Qt::KeepAspectRatio);
        QPainter painter_2(pixmap_2);
        painter_2.setPen(QPen(color_2, ui->horizontalSlider->value()));
        painter_2.setBrush(color_2);
        painter_2.setRenderHint(QPainter::Antialiasing,true);
        painter_2.drawPoint(new_x, new_y);
        ui->lbl_mask->setPixmap(*pixmap_2);
    }
}



void MainWindow::on_btn_open_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,
                                                    tr("Choose a picture"),
                                                    "./images/",
                                                    tr("All Files(*);;PNG Files (*png)"));

    if(!fileName.isEmpty()){
//        qDebug() << fileName;
        std::string imageName = fileName.toStdString();
//        cv::Mat image = cv::imread(imageName, cv::IMREAD_UNCHANGED);
//        cv::Mat label = cv::imread(imageName, cv::IMREAD_UNCHANGED);



        pixmap = new QPixmap(fileName);
        int height = pixmap->height();
        int width = pixmap->width();
        if (height <= 450 && width <= 450){
        }
        else if(height >= width){
            width = int(width * 450 / height );
            height = 450;

        }
        else{
            height = int(height * 450 / width );
            width = 450;

        }
        pixmap->scaled(width, height, Qt::KeepAspectRatio);
        ui->lbl_src->resize(width, height);
        ui->lbl_src->setScaledContents(true);
        ui->lbl_src->setPixmap(*pixmap);

        labelName = imageName;
        labelName = labelName.replace(imageName.find("images"), 6, "labels");
//        std::cout<<imageName<<std::endl;
//        std::cout<<labelName<<std::endl;

        pixmap_2 = new QPixmap(QString::fromStdString(labelName));
        pixmap_2->scaled(width, height, Qt::KeepAspectRatio);
        ui->lbl_mask->resize(width, height);
        ui->lbl_mask->setScaledContents(true);
        ui->lbl_mask->setPixmap(*pixmap_2);
        flag = 1;
    }
}



QColor getColor(int x, int y){
    x = QCursor::pos().x();
    y = QCursor::pos().y();
    QList<QScreen*> list_screen =  QGuiApplication::screens();  // PC may link more than 1 screens
    QPixmap pp = list_screen.at(0)->grabWindow(0,x,y,1,1);  // screenshot only 1 pixel
    if(!pp.isNull()){
        QImage image = pp.toImage();
        if(!image.isNull()){
            if(image.valid(0, 0)){  // position is valid
                color = image.pixel(0, 0);
                int R = color.red();
                int G = color.green();
                int B = color.blue();
                qDebug() << R << G << B;
            }
        }
    }
    return color;
}



void MainWindow::mousePressEvent(QMouseEvent *e){
    if (e->button() == Qt::RightButton){    // click right button to get the color of the pixel
        color = getColor(0, 0);
    }

    else if(e->button() == Qt::LeftButton){
        myDraw();
    }

}



void MainWindow::mouseMoveEvent(QMouseEvent *event){
    if(event->buttons()&Qt::LeftButton){
        myDraw();
    }
}




void MainWindow::on_btn_save_clicked()
{
    if(flag){
        QImage qimg = ui->lbl_mask->pixmap()->toImage();
        QDateTime time = QDateTime::currentDateTime();
        labelName = labelName.replace(labelName.find("labels"), 6, "output");
        QString str = QString::fromStdString(labelName);
        qimg.save(str,"PNG", 100);
        QMessageBox::information(this, tr("Info"), tr("Label has been saved."), tr("OK"));
    }
}


void MainWindow::on_btn_next_clicked()
{
    if (flag && index < fileSize){
        pixmap = new QPixmap(QString::fromStdString("./images/") + filenames[index]);
        int height = pixmap->height();
        int width = pixmap->width();
        if (height <= 450 && width <= 450){
        }
        else if(height >= width){
            width = int(width * 450 / height );
            height = 450;

        }
        else{
            height = int(height * 450 / width );
            width = 450;

        }
        pixmap->scaled(width, height, Qt::KeepAspectRatio);
        ui->lbl_src->resize(width, height);
        ui->lbl_src->setScaledContents(true);
        ui->lbl_src->setPixmap(*pixmap);

        std::string imageName = (QString::fromStdString("./images/") + filenames[index]).toStdString();
        labelName = imageName;
        labelName = labelName.replace(imageName.find("images"), 6, "labels");

        pixmap_2 = new QPixmap(QString::fromStdString(labelName));
        pixmap_2->scaled(width, height, Qt::KeepAspectRatio);
        ui->lbl_mask->resize(width, height);
        ui->lbl_mask->setScaledContents(true);
        ui->lbl_mask->setPixmap(*pixmap_2);
        ++index;
    }
    else{
        QMessageBox::information(this, tr("Info"), tr("No more images to display."), tr("OK"));
    }
}



QStringList getFileNames(const QString &path){
    QDir dir(path);
    QStringList nameFilters;
    nameFilters <<"*.jpg"<<"*.png";
    QStringList files = dir.entryList(nameFilters,
                                      QDir::Files|QDir::Readable,
                                      QDir::Name);
    return files;
}



void MainWindow::on_btn_exit_clicked()
{
     exit(0);
}



void MainWindow::on_btn_instruction_clicked()
{
    Instruction* insPage = new Instruction();
    insPage->setWindowTitle("Instruction Page");
    insPage->show();
}


































