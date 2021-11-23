#ifndef LISTARCLIENTE_H
#define LISTARCLIENTE_H

#include <QDialog>

namespace Ui {
class listarCliente;
}

class listarCliente : public QDialog
{
    Q_OBJECT

public:
    explicit listarCliente(QWidget *parent = 0);
    ~listarCliente();
    //void mostrarLista(clsListaCliente *lista);

private slots:
    void on_cmdListarClientes_clicked();

private:
    Ui::listarCliente *ui;
};

#endif // LISTARCLIENTE_H
