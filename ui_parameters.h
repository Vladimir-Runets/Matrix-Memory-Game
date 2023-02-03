/********************************************************************************
** Form generated from reading UI file 'parameters.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMETERS_H
#define UI_PARAMETERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Parameters
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *Parameters)
    {
        if (Parameters->objectName().isEmpty())
            Parameters->setObjectName(QString::fromUtf8("Parameters"));
        Parameters->resize(400, 300);
        Parameters->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 85, 0);"));
        pushButton = new QPushButton(Parameters);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(130, 60, 121, 51));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 0);\n"
"background-color: rgb(0, 85, 0);"));
        pushButton_2 = new QPushButton(Parameters);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 200, 121, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"background-color: rgb(147, 0, 0);"));
        pushButton_3 = new QPushButton(Parameters);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(130, 130, 121, 51));
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);\n"
"background-color: rgb(171, 171, 0);"));

        retranslateUi(Parameters);

        QMetaObject::connectSlotsByName(Parameters);
    } // setupUi

    void retranslateUi(QWidget *Parameters)
    {
        Parameters->setWindowTitle(QCoreApplication::translate("Parameters", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Parameters", "\320\233\320\265\320\263\320\272\320\276", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Parameters", "\320\241\320\273\320\276\320\266\320\275\320\276", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Parameters", "\320\241\321\200\320\265\320\264\320\275\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Parameters: public Ui_Parameters {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMETERS_H
