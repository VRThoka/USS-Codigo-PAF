#include "registrarcliente.h"
#include "ui_registrarcliente.h"
#include "QMessageBox"
//#include "clscliente.h"

registrarCliente::registrarCliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrarCliente)
{
    ui->setupUi(this);
}

registrarCliente::~registrarCliente()
{
    delete ui;
}


void registrarCliente::on_pushButton_clicked()
{
    /*
    clsCliente *cli = new clsCliente();

    QMessageBox msje;
    if(ui->txtNombre->text().length() == 0){
        msje.setText("Debe ingresar el nombre");
        msje.exec();
        return;
    }
    if(ui->txtApellido->text().length() == 0){
        msje.setText("Debe ingresar el apellido");
        msje.exec();
        return;
    }
    if(ui->txtDNI->text().length() == 0){
        msje.setText("Debe ingresar el DNI");
        msje.exec();
        return;
    }

    cli->setNombre(ui->txtNombre->text().toStdString());
    cli->setApellido(ui->txtApellido->text().toStdString());
    cli->setDni(ui->txtDNI->text().toStdString());
    cli->setEdad(ui->txtEdad->text().toStdString());
    cli->setPaga(ui->txtPago->text().toStdString()); //value
    this->lC->insertarCliente(clie);
    msje.setText("Cliente registrado correctamente");
    msje.exec();
    limpiarControles();
    //cli->setPesoEquipaje(ui->txtPesoEquipaje->value);

    /*
    if(ui->txtCodigo->text().length() == 0){
        msje.setText("Debe ingresar el codigo");
        msje.exec();
        return;
    }*/

    //Qstring, es una cadena de en ui
    //toStdString, convertir a cadena
    //cli->setCodigo(ETC, corregir)
    /*
    if(ui->txtEdad->toPlainText().length() == 0){ //para
        msje.setText("Debe ingresar la direccion");
        msje.exec();
        return;
    }
    */
}
/*
clsListaCliente *registrarCliente::getLC() const
{
    return lC;
}

void registrarCliente::setLC(clsListaCliente *value)
{
    lC = value;
}

void registrarCliente::limpiarControles()
{
    ui->txtNombre->setText("");
    ui->txtApellido->setText("");
    ui->txtDNI->setText("");
    ui->txtEdad->setText("");
    ui->txtNombre->setFocus();
}
*/

