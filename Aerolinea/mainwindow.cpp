#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "registrarcliente.h"
#include "seleccionarcategoriaavion.h"
#include "listarcliente.h"
#include "buscarcliente.h"
#include "registrarcliente.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionRegistrar_cliente_triggered()
{
    registrarCliente *rC = new registrarCliente();
    rC->show();
}

void MainWindow::on_actionSeleccionar_categor_a_de_avi_n_triggered()
{
    seleccionarCategoriaAvion *sCAvion = new seleccionarCategoriaAvion();
    sCAvion->show();
}

void MainWindow::on_actionLista_cliente_triggered()
{
    listarCliente *lC = new listarCliente();
    lC->show();
}

void MainWindow::on_actionBuscar_cliente_triggered()
{
    buscarCliente *buscarCli = new buscarCliente();
    buscarCli->show();
}

void MainWindow::on_actionRegistrar_viajes_triggered()
{
    registrarCliente *registrarCli =new registrarCliente();
    registrarCli->show();
}
