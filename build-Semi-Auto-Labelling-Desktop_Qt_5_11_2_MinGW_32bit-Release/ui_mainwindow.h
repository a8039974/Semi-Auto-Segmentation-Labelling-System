/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_as;
    QWidget *centralWidget;
    QFrame *frame;
    QLabel *lbl_src;
    QLabel *label_4;
    QLabel *lbl_mask;
    QPushButton *btn_next;
    QPushButton *btn_exit;
    QLabel *label_3;
    QPushButton *btn_open;
    QPushButton *btn_save;
    QSlider *horizontalSlider;
    QLabel *label;
    QPushButton *btn_instruction;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1120, 750);
        MainWindow->setStyleSheet(QStringLiteral(""));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QStringLiteral("actionSave_as"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 1120, 750));
        frame->setStyleSheet(QStringLiteral("border-image: url(:/images/bg1.jpg);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lbl_src = new QLabel(frame);
        lbl_src->setObjectName(QStringLiteral("lbl_src"));
        lbl_src->setGeometry(QRect(40, 260, 450, 450));
        lbl_src->setStyleSheet(QStringLiteral("border-image: url(:/images/empty.jpg);"));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(170, 30, 771, 81));
        label_4->setStyleSheet(QLatin1String("border-image: url(:/images/btn3.png);\n"
"font: 25 24pt \"Microsoft YaHei\";"));
        lbl_mask = new QLabel(frame);
        lbl_mask->setObjectName(QStringLiteral("lbl_mask"));
        lbl_mask->setGeometry(QRect(510, 260, 450, 450));
        lbl_mask->setStyleSheet(QStringLiteral("border-image: url(:/images/empty.jpg);"));
        btn_next = new QPushButton(frame);
        btn_next->setObjectName(QStringLiteral("btn_next"));
        btn_next->setGeometry(QRect(990, 290, 121, 61));
        btn_next->setStyleSheet(QString::fromUtf8("border-image: url(:/images/btn1.png);\n"
"font: 20pt \"\351\273\221\344\275\223\";"));
        btn_exit = new QPushButton(frame);
        btn_exit->setObjectName(QStringLiteral("btn_exit"));
        btn_exit->setGeometry(QRect(990, 380, 121, 61));
        btn_exit->setStyleSheet(QString::fromUtf8("border-image: url(:/images/btn1.png);\n"
"font: 20pt \"\351\273\221\344\275\223\";"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(980, 690, 131, 41));
        label_3->setStyleSheet(QStringLiteral("border-image: url(:/images/btn6.png);"));
        btn_open = new QPushButton(frame);
        btn_open->setObjectName(QStringLiteral("btn_open"));
        btn_open->setGeometry(QRect(990, 110, 121, 61));
        btn_open->setStyleSheet(QString::fromUtf8("border-image: url(:/images/btn1.png);\n"
"font: 20pt \"\351\273\221\344\275\223\";"));
        btn_save = new QPushButton(frame);
        btn_save->setObjectName(QStringLiteral("btn_save"));
        btn_save->setGeometry(QRect(990, 200, 121, 61));
        btn_save->setStyleSheet(QString::fromUtf8("border-image: url(:/images/btn1.png);\n"
"font: 20pt \"\351\273\221\344\275\223\";"));
        horizontalSlider = new QSlider(frame);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(210, 180, 401, 31));
        horizontalSlider->setStyleSheet(QStringLiteral("border-image: url(:/images/btn6.png);"));
        horizontalSlider->setOrientation(Qt::Horizontal);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 180, 131, 31));
        label->setStyleSheet(QLatin1String("border-image: url(:/images/btn2.png);\n"
"color: rgb(195, 240, 250);\n"
"font: 18pt \"Times New Roman\";"));
        btn_instruction = new QPushButton(frame);
        btn_instruction->setObjectName(QStringLiteral("btn_instruction"));
        btn_instruction->setGeometry(QRect(980, 640, 131, 41));
        QFont font;
        font.setFamily(QStringLiteral("Century"));
        font.setPointSize(16);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        btn_instruction->setFont(font);
        btn_instruction->setStyleSheet(QLatin1String("border-image: url(:/images/btn6.png);\n"
"color: rgb(242, 253, 255);\n"
"font: 16pt \"Century\";\n"
""));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(590, 180, 41, 31));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/images/btn6.png);\n"
"font: 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 255, 255);"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(190, 180, 31, 31));
        label_5->setStyleSheet(QString::fromUtf8("border-image: url(:/images/btn6.png);\n"
"font: 14pt \"\351\273\221\344\275\223\";\n"
"color: rgb(255, 255, 255);"));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(830, 110, 151, 151));
        label_6->setStyleSheet(QStringLiteral("border-image: url(:/images/color3.png);"));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(670, 180, 151, 31));
        label_7->setStyleSheet(QLatin1String("border-image: url(:/images/btn2.png);\n"
"color: rgb(195, 240, 250);\n"
"font: 16pt \"Times New Roman\";"));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
        actionSave_as->setText(QApplication::translate("MainWindow", "Save as", nullptr));
        lbl_src->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600; color:#5d5d5d;\">Semi-Auto Segmentation Labelling System</span></p></body></html>", nullptr));
        lbl_mask->setText(QString());
        btn_next->setText(QApplication::translate("MainWindow", "Next", nullptr));
        btn_exit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:600; color:#dcffff;\">V1.0 2019</span></p></body></html>", nullptr));
        btn_open->setText(QApplication::translate("MainWindow", "Open", nullptr));
        btn_save->setText(QApplication::translate("MainWindow", "Save", nullptr));
        label->setText(QApplication::translate("MainWindow", " Pen Size", nullptr));
        btn_instruction->setText(QApplication::translate("MainWindow", "Instruction", nullptr));
        label_2->setText(QApplication::translate("MainWindow", " 12 ", nullptr));
        label_5->setText(QApplication::translate("MainWindow", " 0", nullptr));
        label_6->setText(QString());
        label_7->setText(QApplication::translate("MainWindow", " Add Instance", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
