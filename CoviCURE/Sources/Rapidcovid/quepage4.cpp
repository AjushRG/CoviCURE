#include "Headers/Rapidcovid/quepage4.h"
#include "ui_quepage4.h"
#include <QDebug>

//extern int count;
double count4;

QString cssquepage4=
        "QPushButton {"
                          "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 229, 131, 255), stop:0.710227 rgba(255, 0, 0, 255));"

                          "color: rgb(255, 255, 255);"
                          "border-radius: 20px;"
                          "font: 20pt;"
                          "width: 90px;"
                          "font-style: \"Cooper Black\";"
                       "}"

        "QPushButton:hover {"
                "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0.0113636 rgba(255, 25, 159, 255), stop:0.892045 rgba(51, 119, 255, 255));"
                            "}"
        "QpushButton:presssed {"
        "background-color: rgb(85, 170, 127);"
        "}";
QString backsubmit=
        "QPushButton {"
                          "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 229, 131, 255), stop:0.710227 rgba(255, 0, 0, 255));"

                          "color: rgb(255, 255, 255);"
                          "border-radius: 20px;"
                          "font: 20pt;"
                          "width: 90px;"
                          "font-style: \"Cooper Black\";"
                       "}"
        "QPushButton:hover {"
                "background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0.0113636 rgba(255, 25, 159, 255), stop:0.892045 rgba(51, 119, 255, 255));"
                            "}";

Quepage4::Quepage4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Quepage4)
{
    ui->setupUi(this);
    this->setWindowState(Qt::WindowMaximized);
    this-> showMaximized();
    ui->que8_opt9->setStyleSheet(cssquepage4);
    ui->que8_opt10->setStyleSheet(cssquepage4);
    ui->que8_opt11->setStyleSheet(cssquepage4);
    ui->que8_opt12->setStyleSheet(cssquepage4);
    ui->que8_opt13->setStyleSheet(cssquepage4);
    ui->que8_opt14->setStyleSheet(cssquepage4);
    ui->que8_opt15->setStyleSheet(cssquepage4);
    ui->que8_opt16->setStyleSheet(cssquepage4);
    ui->que8_opt17->setStyleSheet(cssquepage4);
    ui->que8_opt18->setStyleSheet(cssquepage4);
    ui->que8_opt19->setStyleSheet(cssquepage4);
    ui->que8_opt20->setStyleSheet(cssquepage4);
    ui->que9_opt1->setStyleSheet(cssquepage4);
    ui->que9_opt2->setStyleSheet(cssquepage4);
    ui->que9_opt3->setStyleSheet(cssquepage4);
    ui->que9_opt4->setStyleSheet(cssquepage4);
    ui->back_quepage4->setStyleSheet(backsubmit);
    ui->submit_quepage4->setStyleSheet(backsubmit);
}

//double Quepage4::count4 = 0;

//extern double count;
//extern double count2;
//extern double count3;

Quepage4::~Quepage4()
{
    delete ui;
}

void Quepage4::on_que8_opt9_clicked()
{
    count4+=0.50;
    qDebug() << "count4" << count4;
}


void Quepage4::on_que8_opt10_clicked()
{
    count4+=0.50;
    qDebug() << "count4" << count4;
}


void Quepage4::on_que8_opt11_clicked()
{
    count4+=0.75;
    qDebug() << "count4" << count4;
}


void Quepage4::on_que8_opt12_clicked()
{
    count4+=1;
    qDebug() << "count4" << count4;
}


void Quepage4::on_que8_opt13_clicked()
{
    count4+=0.50;
    qDebug() << "count4" << count4;
}


void Quepage4::on_que8_opt14_clicked()
{
    count4+=0.25;
    qDebug() << "count4" << count4;
}


void Quepage4::on_que8_opt15_clicked()
{
    count4+=0.50;
    qDebug() << "count4" << count4;
}


void Quepage4::on_que8_opt16_clicked()
{
    count4+=0.75;
    qDebug() << "count4" << count4;
}


void Quepage4::on_que8_opt17_clicked()
{
    count4+=1;
    qDebug() << "count4" << count4;
}


void Quepage4::on_que8_opt18_clicked()
{
    count4+=0.75;
    qDebug() << "count4" << count4;
}


void Quepage4::on_que8_opt19_clicked()
{
    count4+=0.50;
    qDebug() << "count4" << count4;
}


void Quepage4::on_que8_opt20_clicked()
{
    count4+=0.50;
    qDebug() << "count4" << count4;
}


void Quepage4::on_que9_opt1_clicked()
{
    count4+=0.25;
    qDebug() << "count4" << count4;
}


void Quepage4::on_que9_opt2_clicked()
{
    count4+=0.50;
    qDebug() << "count4" << count4;
}


void Quepage4::on_que9_opt3_clicked()
{
    count4+=0.75;
    qDebug() << "count4" << count4;
}


void Quepage4::on_que9_opt4_clicked()
{
    count4+=1;
    qDebug() << "count4" << count4;
}


void Quepage4::on_submit_quepage4_clicked()
{
    hide();
    messagepage = new Messagepage();
    messagepage->show();
}


void Quepage4::on_back_quepage4_clicked()
{
    hide();
}

