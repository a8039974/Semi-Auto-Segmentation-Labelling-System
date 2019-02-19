/********************************************************************************
** Form generated from reading UI file 'instruction.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTRUCTION_H
#define UI_INSTRUCTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Instruction
{
public:
    QLabel *label;
    QTextEdit *textEdit;

    void setupUi(QWidget *Instruction)
    {
        if (Instruction->objectName().isEmpty())
            Instruction->setObjectName(QStringLiteral("Instruction"));
        Instruction->resize(713, 493);
        label = new QLabel(Instruction);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 711, 491));
        label->setStyleSheet(QStringLiteral("border-image: url(:/images/bg1.jpg);"));
        textEdit = new QTextEdit(Instruction);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(0, 0, 711, 491));
        textEdit->setStyleSheet(QStringLiteral("border-image: url(:/images/bg1.jpg);"));

        retranslateUi(Instruction);

        QMetaObject::connectSlotsByName(Instruction);
    } // setupUi

    void retranslateUi(QWidget *Instruction)
    {
        Instruction->setWindowTitle(QApplication::translate("Instruction", "Form", nullptr));
        label->setText(QApplication::translate("Instruction", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textEdit->setHtml(QApplication::translate("Instruction", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; color:#e0faf8;\">Author: Xu Liu</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; color:#e0faf8;\">Date: 02/18/2019</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt; font-weight:600; color:#e0faf8;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; ma"
                        "rgin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; color:#e0faf8;\">This is a semi-auto labelling software for those who work on image labelling.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt; font-weight:600; color:#e0faf8;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt; font-weight:600; color:#e0faf8;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; color:#e0faf8;\">Input:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; "
                        "color:#e0faf8;\">Click the &quot;Open&quot; button, open the &quot;image&quot; directory and select the first image to start. After this step, the left canvas will display the original image with 50% transparence colored label on it. And the right canvas will display the labelled image with totally black ground and colorful foreground (one color, one instance). </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; color:#e0faf8;\">All the images in the &quot;image&quot; directory are the outputs(aka. prediction) of the segmentation deep neural network and are located at the &quot;masks&quot; directory. Most parts of the right image are labelled correctly by the neural network, what we need to do is just to revise it slightly.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;"
                        " font-size:11pt; font-weight:600; color:#e0faf8;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt; font-weight:600; color:#e0faf8;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; color:#e0faf8;\">Instructions: </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; color:#e0faf8;\">1. Click your right mouse button on the right image to pick a color (the color is corresponding to the pixel where your cursor locates) that you wish to revise on the left image.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; fo"
                        "nt-weight:600; color:#e0faf8;\">If there are instances that have not been labelled, you can click your right mouse button on the circular color palatte to pick a different color.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt; font-weight:600; color:#e0faf8;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; color:#e0faf8;\">2. Move your cursor to right image, click at the place where you wish to revise the label, keep press the left mouse button and move it can draw curve lines, which can revise a large part.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt; font-weight:600; color:#e0faf8;\"><br /></p>\n"
"<p style=\" margin-top:"
                        "0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; color:#e0faf8;\">3. The silder on the top of the two images can control the pen (or brush) size, when you need to paint (revise) a large part, you can move the slider a bit right to get a larger pen size. On the other hand, just move it left can be helpful for revising small part.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt; font-weight:600; color:#e0faf8;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; color:#e0faf8;\">4. Click &quot;Save&quot; button on the right can save the revised image (the right one) as a 3 channels, 8 unsigned bits  PNG format file at the &quot;output&quot; directory, which is in"
                        " the same directory as the &quot;images&quot; directory. </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt; font-weight:600; color:#e0faf8;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; color:#e0faf8;\">5. Click &quot;Next&quot; button then the two canvas can refresh and load the next pair of image and label. Then just repeat the above operations.</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Instruction: public Ui_Instruction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTRUCTION_H
