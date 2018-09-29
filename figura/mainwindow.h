#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include <QPixmap>
#include <QColor>
#include<vector>
#include <QString>
#include <QPoint>
#include <QPen>
#include "figure.h"
#include "circle.h"
#include "square.h"
#include "triangle.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_draw_circle_clicked();

    void on_draw_square_clicked();

    void on_draw_triangle_clicked();

    void on_label_draw_area_linkActivated(const QString &link);

private:

    void draw(QPainter * painter);
    vector<figure *> vf;

private:

    void acircle(QPainter * painter);

    void asquare(QPainter * painter);

    void atriangle(QPainter * painter);

private:

    Ui::MainWindow *ui;
    QPainter * painter;
    QPixmap * pixmap;
    QPen * pen;

};

#endif // MAINWINDOW_H
