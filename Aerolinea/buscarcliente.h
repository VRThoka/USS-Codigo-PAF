#ifndef BUSCARCLIENTE_H
#define BUSCARCLIENTE_H

#include <QDialog>

namespace Ui {
class buscarCliente;
}

class buscarCliente : public QDialog
{
    Q_OBJECT

public:
    explicit buscarCliente(QWidget *parent = 0);
    ~buscarCliente();

private:
    Ui::buscarCliente *ui;
};

#endif // BUSCARCLIENTE_H
