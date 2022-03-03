#include "Headers\dashboard.h"
#include "ui_dashboard.h"
#include <QPixmap>

Dashboard::Dashboard(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Dashboard)
{
    ui->setupUi(this);
   QPixmap pix(":/resources/img/dashboard.png");
  // int w = ui->label_dashboard->width();
  // int h = ui->label_dashboard->height();
   ui -> label_dashboard -> setPixmap(pix.scaled(1100, 400, Qt::KeepAspectRatio));
}

Dashboard::~Dashboard()
{
    delete ui;
}



void Dashboard::on_pushButton_Hospital_clicked()
{
    choosehospitals = new ChooseHospitals();
    choosehospitals->show();
}
