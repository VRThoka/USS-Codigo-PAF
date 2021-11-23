#include "registraraerolinea.h"
#include "ui_registraraerolinea.h"

registrarAerolinea::registrarAerolinea(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrarAerolinea)
{
    ui->setupUi(this);
}

registrarAerolinea::~registrarAerolinea()
{
    delete ui;
}
