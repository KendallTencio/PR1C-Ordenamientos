#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPaintEvent>
#include <QPainter>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    scene = new QGraphicsScene(this);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);

    scene->setSceneRect(-50,50,100,100);
    QPen myPen = QPen(Qt::red);

    QLineF TopLine(scene->sceneRect().topLeft(), scene->sceneRect().topRight());
    QLineF LeftLine(scene->sceneRect().topLeft(), scene->sceneRect().bottomLeft());
    QLineF RightLine(scene->sceneRect().topLeft(), scene->sceneRect().bottomRight());
    QLineF BottomLine(scene->sceneRect().bottomLeft(), scene->sceneRect().bottomRight());

    scene->addLine(TopLine,myPen);
    scene->addLine(LeftLine,myPen);
    scene->addLine(RightLine,myPen);
    scene->addLine(BottomLine,myPen);

   // MyView view;

     //   view.setScene(&scene);

        //view.show();
    /*

        QMdiSubWindow *child = ui->mdiArea->addSubWindow(view);

        child->setWindowTitle(tr("Multi document editor window"));

        // Display window

        child->show();*/
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mover(int _x,int _y){
    QPropertyAnimation *animation = new QPropertyAnimation(ui->label, "geometry");
    animation->setDuration(100);
    animation->setStartValue(QRect(this->x, 0, 100, this->y));
    this->y +=_y;
    this->x +=_x;
    animation->setEndValue(QRect(x,0, 100, y));
    animation->start();
}


void MainWindow::on_btnArriba_clicked()
{
    if (this->y>60)
        this->mover(0,-10);
}


void MainWindow::on_btnAbajo_clicked()
{
    if (this->y<630)
        this->mover(0,10);
}

void MainWindow::on_btnIzquierda_clicked()
{
    if (this->x>-30)
        this->mover(-10,0);
}

void MainWindow::on_btnDerecha_clicked()
{
    if (this->x<580)
        this->mover(10,0);
}

void MainWindow::on_pushButton_clicked()
{
    m_flag = true;
    update();
}

void MainWindow::on_pushButton_2_clicked()
{
    m_flag = false;
    update();
}

void MainWindow::moverObjeto()
{
    ObjetoMovil obMovil;
    if (!lista.isVacia())
         obMovil.mover(x,y);
    else
        obMovil.mover(lista.getPos(lista.getTam())->getElemento().getX(),lista.getPos(lista.getTam())->getElemento().getX());
    lista.insertarFinal(obMovil);
    for (int i=0; lista.getTam()>i;i++)
    {
        QLabel *label = new QLabel(this);
        label->setText("5");
        label->setGeometry(lista.getPos(i)->getElemento().getX(),0,100,lista.getPos(i)->getElemento().getY());
        label->show();
    }
}

void MainWindow::paintEvent(QPaintEvent *event/*,int x, int y*/)
{

    int x = 10;
    int y = 10;
  //  if (this->y>60)
    //    this->mover(0,-10);
    QPainter painter(this);
    if(!m_flag) {
        painter.setPen( Qt::green );
        painter.setBrush( Qt::green );
        painter.drawRect(x, y, 50, 50);
    }
    else
    {
        painter.setPen( Qt::red );
        painter.setBrush( Qt::red );
        painter.drawRect(90, 10, 50, 50);
        painter.setPen( Qt::blue );
        painter.setBrush( Qt::blue );
        painter.drawRect(10, 10, 50, 50);
    }
}
