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

    void on_btnArriba_clicked();

    void on_btnAbajo_clicked();

    void on_btnIzquierda_clicked();

    void on_btnDerecha_clicked();

private:
    int x=-20;
    int y=60;
    Ui::MainWindow *ui;
    void mover(int,int);
};

#endif // MAINWINDOW_H
