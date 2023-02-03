/********************************************************************************
** Form generated from reading UI file 'matrix.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATRIX_H
#define UI_MATRIX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Matrix
{
public:
    QPushButton *pushButton_0;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QPushButton *pushButton_8;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButtonPar;
    QPushButton *pushButtonExit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;

    void setupUi(QWidget *Matrix)
    {
        if (Matrix->objectName().isEmpty())
            Matrix->setObjectName(QString::fromUtf8("Matrix"));
        Matrix->resize(522, 479);
        Matrix->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        pushButton_0 = new QPushButton(Matrix);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(80, 80, 101, 101));
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(89, 89, 89)}\n"
""));
        pushButton_1 = new QPushButton(Matrix);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(220, 80, 101, 101));
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(89, 89, 89)}\n"
""));
        pushButton_2 = new QPushButton(Matrix);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(360, 80, 101, 101));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(89, 89, 89)}\n"
""));
        pushButton_5 = new QPushButton(Matrix);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(360, 220, 101, 101));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(89, 89, 89)}\n"
""));
        pushButton_4 = new QPushButton(Matrix);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(220, 220, 101, 101));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(89, 89, 89)}\n"
""));
        pushButton_3 = new QPushButton(Matrix);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(80, 220, 101, 101));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(89, 89, 89)}\n"
""));
        pushButton_7 = new QPushButton(Matrix);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(220, 360, 101, 101));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(89, 89, 89)}\n"
""));
        pushButton_6 = new QPushButton(Matrix);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(80, 360, 101, 101));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(89, 89, 89)}\n"
""));
        pushButton_8 = new QPushButton(Matrix);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(360, 360, 101, 101));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {background-color: rgb(89, 89, 89)}\n"
""));
        label = new QLabel(Matrix);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 10, 111, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        font.setPointSize(16);
        font.setBold(false);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font: 16pt \"Segoe UI\";\n"
"color: rgb(0, 255, 255);"));
        lineEdit = new QLineEdit(Matrix);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(300, 10, 51, 41));
        lineEdit->setStyleSheet(QString::fromUtf8("font: 20pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        pushButtonPar = new QPushButton(Matrix);
        pushButtonPar->setObjectName(QString::fromUtf8("pushButtonPar"));
        pushButtonPar->setGeometry(QRect(10, 20, 81, 29));
        pushButtonPar->setStyleSheet(QString::fromUtf8("color: rgb(170, 255, 0);\n"
"background-color: rgb(0, 0, 255);"));
        pushButtonExit = new QPushButton(Matrix);
        pushButtonExit->setObjectName(QString::fromUtf8("pushButtonExit"));
        pushButtonExit->setGeometry(QRect(90, 20, 83, 29));
        pushButtonExit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 0, 0);"));
        label_2 = new QLabel(Matrix);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(360, 10, 111, 41));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("font: 16pt \"Segoe UI\";\n"
"color: rgb(202, 0, 0);"));
        lineEdit_2 = new QLineEdit(Matrix);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(460, 10, 51, 41));
        lineEdit_2->setStyleSheet(QString::fromUtf8("font: 20pt \"Segoe UI\";"));
        label_3 = new QLabel(Matrix);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(230, 460, 121, 41));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("font: 16pt \"Segoe UI\";"));

        retranslateUi(Matrix);

        QMetaObject::connectSlotsByName(Matrix);
    } // setupUi

    void retranslateUi(QWidget *Matrix)
    {
        Matrix->setWindowTitle(QCoreApplication::translate("Matrix", "Form", nullptr));
        pushButton_0->setText(QString());
        pushButton_1->setText(QString());
        pushButton_2->setText(QString());
        pushButton_5->setText(QString());
        pushButton_4->setText(QString());
        pushButton_3->setText(QString());
        pushButton_7->setText(QString());
        pushButton_6->setText(QString());
        pushButton_8->setText(QString());
        label->setText(QCoreApplication::translate("Matrix", "\320\243\321\200\320\276\320\262\320\265\320\275\321\214:", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit->setToolTip(QCoreApplication::translate("Matrix", "<html><head/><body><p align=\"center\">\320\276\320\276</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit->setText(QString());
        pushButtonPar->setText(QCoreApplication::translate("Matrix", "\320\241\320\273\320\276\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
        pushButtonExit->setText(QCoreApplication::translate("Matrix", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        label_2->setText(QCoreApplication::translate("Matrix", "\320\240\320\265\320\272\320\276\321\200\320\264:", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Matrix: public Ui_Matrix {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATRIX_H
