#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPropertyAnimation>
#include "Estructuras/listaenlazada.cpp"
#include "objetomovil.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    ListaEnlazada<ObjetoMovil> lista;
private slots:

    void on_btnArriba_clicked();

    void on_btnAbajo_clicked();

    void on_btnIzquierda_clicked();

    void on_btnDerecha_clicked();

    void on_pushButton_clicked();

private:

    int x=-20;
    int y=60;
    QList<QString> lista_Etiquietas = new QList();
    Ui::MainWindow *ui;
    void mover(int,int);
};

#endif // MAINWINDOW_H
