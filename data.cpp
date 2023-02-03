#include "data.h"
#include "ui_data.h"

Data::Data(bool _reg, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Data)
{

    ui->setupUi(this);
    user = 0;
    registration = _reg;
    if (registration == 0){
        ui->pushButton->setText("Зарегистрироваться");
    }
    else {
        ui->pushButton->setText("Войти");
        ui->label_3->hide();
        ui->lineEdit_3->hide();
    }
}

QString Data::Function(const QString &str)
{
    return str;
}

Data::~Data()
{
    delete ui;
}

void Data::on_pushButton_clicked()
{
    if (registration == 1){
        std::ifstream fin("data.txt");
        if (!fin.is_open()){
            fin.close();
            this->close();
        }
        QString str1 = ui->lineEdit->text();
        QString str2 = ui->lineEdit_2->text();
        QString str = Function(str1+str2);
        size_t i = 1;
        bool flag = 0;
        std::string temp;
        while (fin >> temp){
            if (QString::fromStdString(temp) == str){
                flag = 1;
                break;
            }
            fin >> temp;
            fin >> temp;
            i++;
        }
        fin.close();
        if (flag == 0){
            QMessageBox msgb;
            msgb.setText("Ошибка");
            msgb.exec();
        }
        else user = i;
        qDebug() << i;
        this->close();
    }
    else{
        std::ofstream fout("data.txt", std::ios::app);
        if (!fout.is_open()){
            fout.close();
            this->close();
        }
        QString str1 = ui->lineEdit->text();
        QString str2 = ui->lineEdit_2->text();
        QString str = Function(str1+str2);
        fout << str.toStdString() << " " << ui->lineEdit_3->text().toStdString() << " 1" << "\n";
        fout.close();
        std::string temp;
        std::ifstream fin("data.txt");
        size_t i = 0;
        while (!fin.eof())
            {
                std::getline(fin, temp);
                i++;
            }
        user = i-1;
        this->close();
    }
}

