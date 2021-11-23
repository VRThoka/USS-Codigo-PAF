#ifndef REGISTRARVIAJE_H
#define REGISTRARVIAJE_H

#include <QDialog>

namespace Ui {
class registrarViaje;
}

class registrarViaje : public QDialog
{
    Q_OBJECT

public:
    explicit registrarViaje(QWidget *parent = 0);
    ~registrarViaje();

private:
    Ui::registrarViaje *ui;
};

#endif // REGISTRARVIAJE_H
