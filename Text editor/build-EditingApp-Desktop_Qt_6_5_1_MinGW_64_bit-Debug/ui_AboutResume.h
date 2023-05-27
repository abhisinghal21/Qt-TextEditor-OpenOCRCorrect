/********************************************************************************
** Form generated from reading UI file 'AboutResume.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTRESUME_H
#define UI_ABOUTRESUME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Resume
{
public:
    QTextBrowser *textBrowser;

    void setupUi(QDialog *Resume)
    {
        if (Resume->objectName().isEmpty())
            Resume->setObjectName("Resume");
        Resume->resize(400, 300);
        textBrowser = new QTextBrowser(Resume);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(80, 40, 256, 192));

        retranslateUi(Resume);

        QMetaObject::connectSlotsByName(Resume);
    } // setupUi

    void retranslateUi(QDialog *Resume)
    {
        Resume->setWindowTitle(QCoreApplication::translate("Resume", "Dialog", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("Resume", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">file:///C:/Users/Abhinandan Singhal/Downloads/Screenshot 2023-05-27 171408.png</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Resume: public Ui_Resume {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTRESUME_H
