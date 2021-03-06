#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    pixmap = new QPixmap(600, 400);
    pixmap->fill();
    pen = new QPen(QColor("red"));
    ui->label_draw_area->setPixmap(*pixmap);
    painter = new QPainter(pixmap);
    painter->setPen(*pen);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::acircle(QPainter * painter)
{

    vf.push_back(new circle("red",{rand() % 400,rand() % 400},rand() % 100));
    for(figure * s:vf)
        s->draw(painter);
}

void MainWindow::asquare(QPainter * painter)
{
    vf.push_back(new square("purple",{rand() % 200,rand() % 200},rand() % 200));
    //painter->drawRect(150, 200, 150, 150);

    for(figure * s:vf)
        s->draw(painter);
}

void MainWindow::atriangle(QPainter * painter)
{
    vf.push_back(new triangle("purple",rand() % 250,rand() % 250,rand() % 250));

    for(figure * s:vf)
        s->draw(painter);

}
void MainWindow::on_draw_circle_clicked()
{
    pixmap->fill();
    acircle(painter);
    ui->label_draw_area->setPixmap(*pixmap);

}
void MainWindow::on_draw_square_clicked()
{
    pixmap->fill();
    asquare(painter);
    ui->label_draw_area->setPixmap(*pixmap);
}

void MainWindow::on_draw_triangle_clicked()
{
    pixmap->fill();
    atriangle(painter);
    ui->label_draw_area->setPixmap(*pixmap);
}

void MainWindow::on_label_draw_area_linkActivated(const QString & link)
{

}
