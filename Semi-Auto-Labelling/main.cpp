#include "mainwindow.h"
#include <QApplication>
#include<QFileDialog>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Semi-Auto Segmentation Labelling System");
//    w.setWindowOpacity(0.95);
    w.show();
    return a.exec();
}
