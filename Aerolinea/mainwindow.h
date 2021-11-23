#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionRegistrar_cliente_triggered();

    void on_actionSeleccionar_categor_a_de_avi_n_triggered();

    void on_actionLista_cliente_triggered();

    void on_actionBuscar_cliente_triggered();

    void on_actionRegistrar_viajes_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
