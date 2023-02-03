#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    resize(550, 550);
    setWindowTitle("Matrix Memory");
    Del = 400;
    size_t *a = &Del;
    user = 0;
    data = nullptr;
    timer = new QTimer();
    timer->setInterval(500);
    connect(timer, SIGNAL(timeout()), this, SLOT(timerAlarm()));
    parameter = new Parameters(a);
    ui->setupUi(this);

    a = nullptr;
    delete a;

}

Widget::~Widget()
{
    delete ui;
    delete matrix;
    delete parameter;
    delete data;
    delete timer;
}


void Widget::on_pushButton_clicked()
{
    if (data == nullptr) matrix = new Matrix(parameter->GetDel1());
    else matrix = new Matrix(parameter->GetDel1(), data->GetUser());
    this->hide();//
    matrix->show();
}

void Widget::on_pushButton_2_clicked()
{
    this->~Widget();
    this->close();
}

void Widget::on_pushButton_3_clicked()
{
    parameter->show();
}

void Widget::on_pushButton_4_clicked()
{
    data = new Data(0);//регистрация
    data->show();
    timer->start();
}

void Widget::on_pushButton_5_clicked()
{
    data = new Data(1);//вхoд
    data->show();
    timer->start();

}

void Widget::timerAlarm()
{
    user = data->GetUser();
    if (user != 0){

        std::ifstream fin("data.txt");
        std::string name;
        for (size_t i = 0; i < user*3-1; i++){

            fin >> name;
        }

        timer->stop();
    }
}

