#ifndef INTERFAZ_H
#define INTERFAZ_H

#include <QMainWindow>

namespace Ui {
class Interfaz;
}

class Interfaz : public QMainWindow
{
    Q_OBJECT

public:
    explicit Interfaz(QWidget *parent = 0);
    ~Interfaz();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Interfaz *ui;
};

#endif // INTERFAZ_H