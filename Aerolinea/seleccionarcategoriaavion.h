#ifndef SELECCIONARCATEGORIAAVION_H
#define SELECCIONARCATEGORIAAVION_H

#include <QDialog>

namespace Ui {
class seleccionarCategoriaAvion;
}

class seleccionarCategoriaAvion : public QDialog
{
    Q_OBJECT

public:
    explicit seleccionarCategoriaAvion(QWidget *parent = 0);
    ~seleccionarCategoriaAvion();

private:
    Ui::seleccionarCategoriaAvion *ui;
};

#endif // SELECCIONARCATEGORIAAVION_H
