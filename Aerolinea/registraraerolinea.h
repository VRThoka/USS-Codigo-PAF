#ifndef REGISTRARAEROLINEA_H
#define REGISTRARAEROLINEA_H

#include <QDialog>

namespace Ui {
class registrarAerolinea;
}

class registrarAerolinea : public QDialog
{
    Q_OBJECT

public:
    explicit registrarAerolinea(QWidget *parent = 0);
    ~registrarAerolinea();

private:
    Ui::registrarAerolinea *ui;
};

#endif // REGISTRARAEROLINEA_H
