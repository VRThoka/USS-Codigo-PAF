#include "registrarviaje.h"
#include "ui_registrarviaje.h"

registrarViaje::registrarViaje(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrarViaje)
{
    ui->setupUi(this);
}

registrarViaje::~registrarViaje()
{
    delete ui;
}
