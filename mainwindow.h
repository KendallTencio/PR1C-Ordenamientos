#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPropertyAnimation>
#include <QtCore>
#include <QtGui>
#include <QGraphicsScene>
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

    void on_pushButton_2_clicked();

    void paintEvent(QPaintEvent *event/*,int x, int y*/);

    void moverObjeto();

private:

    int x=-20;
    int y=60;
    bool m_flag = false;
    QList<QString>* lista_Etiquietas = new QList<QString>();
    void mover(int,int);
    Ui::MainWindow *ui;
    QGraphicsScene *scene;  //Intentando hacer una animación
    QTimer *timer;
};

#endif // MAINWINDOW_H
