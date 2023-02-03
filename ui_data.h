/********************************************************************************
** Form generated from reading UI file 'data.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATA_H
#define UI_DATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Data
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit_3;
    QLabel *label_3;

    void setupUi(QWidget *Data)
    {
        if (Data->objectName().isEmpty())
            Data->setObjectName(QString::fromUtf8("Data"));
        Data->resize(400, 300);
        Data->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);\n"
"color: rgb(170, 0, 127);\n"
"background-color: rgb(105, 0, 158);"));
        label = new QLabel(Data);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 80, 71, 41));
        label->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        label_2 = new QLabel(Data);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 130, 71, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));
        lineEdit = new QLineEdit(Data);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(160, 90, 131, 28));
        lineEdit_2 = new QLineEdit(Data);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(160, 140, 131, 28));
        pushButton = new QPushButton(Data);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 240, 131, 41));
        lineEdit_3 = new QLineEdit(Data);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(160, 190, 131, 28));
        label_3 = new QLabel(Data);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 180, 71, 41));
        label_3->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));

        retranslateUi(Data);

        QMetaObject::connectSlotsByName(Data);
    } // setupUi

    void retranslateUi(QWidget *Data)
    {
        Data->setWindowTitle(QCoreApplication::translate("Data", "Form", nullptr));
        label->setText(QCoreApplication::translate("Data", "\320\233\320\276\320\263\320\270\320\275:", nullptr));
        label_2->setText(QCoreApplication::translate("Data", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        pushButton->setText(QString());
        label_3->setText(QCoreApplication::translate("Data", "\320\230\320\274\321\217:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Data: public Ui_Data {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATA_H
