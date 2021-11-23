#include "listarcliente.h"
#include "ui_listarcliente.h"
//#include "clslistacliente.h"
//#include "nodocliente.h"

listarCliente::listarCliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::listarCliente)
{
    ui->setupUi(this);
    this->ui->twCliente->setColumnWidth(0,80);
    this->ui->twCliente->setColumnWidth(1,150);
    this->ui->twCliente->setColumnWidth(2,150);
    this->ui->twCliente->setColumnWidth(3,80);
    this->ui->twCliente->setColumnWidth(4,80);
}

listarCliente::~listarCliente()
{
    delete ui;
}

void listarCliente::on_cmdListarClientes_clicked()
{

}
/*void listarCliente :: mostrarLista(clsListaCliente *lista){
    nodoCliente *aux = new nodoCliente();
    aux = lista->getCab(); //no hay getcab
    int x = 0;
    //insertRow(x) agrega fila(crea)
    //Qstring convertir
    while (aux != NULL){
        this->ui->twCliente->insertRow(x);
        this->ui->twCliente->setItem(x,0, new QTableWidgetItem(Qstring::number(aux->getInfoCliente()->getDni())));//es getCodigo
        this->ui->twCliente->setItem(x,1, new QTableWidgetItem(Qstring::fromUtf8(aux->getInfoCliente()->getNombre().c_str())));
        this->ui->twCliente->setItem(x,2, new QTableWidgetItem(Qstring::fromUtf8(aux->getInfoCliente()->getApellido().c_str())));
        this->ui->twCliente->setItem(x,3, new QTableWidgetItem(Qstring::fromUtf8(aux->getInfoCliente()->getDni().c_str())));
        x++;
        aux = aux->getSgte();

    }
}
*/






















