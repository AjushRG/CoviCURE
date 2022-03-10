#include "Headers/vaccine_login.h"
#include "ui_vaccine_login.h"
#include "Headers/loginview.h"
#include"Headers/signupvaccine.h"

Vaccine_Login::Vaccine_Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Vaccine_Login)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/img/vaccine1.png");
    //int w = ui->label_dashboard->width();
    //int h = ui->label_dashboard->height();
    ui -> picvax -> setPixmap(pix.scaled(321, 511, Qt::KeepAspectRatio));
}

Vaccine_Login::~Vaccine_Login()
{
    delete ui;
}

void Vaccine_Login::on_pushButton_clicked()
{
       hide();
       loginview = new Loginview;
       loginview->show();


}


void Vaccine_Login::on_pushButton_2_clicked()
{
    hide();
    signupvax=new Signupvaccine;
    signupvax->show();
}


void Vaccine_Login::on_pushButton_3_clicked()
{

}

