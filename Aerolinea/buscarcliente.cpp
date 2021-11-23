#include "buscarcliente.h"
#include "ui_buscarcliente.h"

buscarCliente::buscarCliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::buscarCliente)
{
    ui->setupUi(this);
}

buscarCliente::~buscarCliente()
{
    delete ui;
}
