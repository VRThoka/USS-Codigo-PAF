#include "seleccionarcategoriaavion.h"
#include "ui_seleccionarcategoriaavion.h"

seleccionarCategoriaAvion::seleccionarCategoriaAvion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::seleccionarCategoriaAvion)
{
    ui->setupUi(this);
}

seleccionarCategoriaAvion::~seleccionarCategoriaAvion()
{
    delete ui;
}
