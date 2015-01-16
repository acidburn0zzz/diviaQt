#include "diviaqt.h"
#include "ui_diviaqt.h"

DiviaQt::DiviaQt(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DiviaQt)
{
    ui->setupUi(this);


}

DiviaQt::~DiviaQt()
{
    delete ui;
}


void DiviaQt::on_btn_aPropos_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("A propos de DiviaQt");
    msgBox.setInformativeText("Version : 1.0 \nDu : 13/01/2015 \nAuteur: Adrien.D");
    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.setIcon(QMessageBox::Information);
    msgBox.exec();
}
