#ifndef REGISTRARCLIENTE_H
#define REGISTRARCLIENTE_H
//#include "clslistacliente.h"
#include <QDialog>

namespace Ui {
class registrarCliente;
}

class registrarCliente : public QDialog
{
    Q_OBJECT

public:
    explicit registrarCliente(QWidget *parent = 0);
    ~registrarCliente();

    //clsListaCliente *getLC() const;
    //void setLC(clsListaCliente *value);

    void limpiarControles();

private slots:
    void on_pushButton_clicked();

private:
    Ui::registrarCliente *ui;
    //clsListaCliente *lC; //genero refractor
};

#endif // REGISTRARCLIENTE_H
