#ifndef CIRCLE_H
#define CIRCLE_H
#include <points.h>
#include "figure.h"


class circle : public figure
{
private:
    points centro;
    int radio;
public:
    circle(const string &  _color="", points _center={0,0},int _radio=1);
    ~circle();

void draw(QPainter* painter)
{

    painter->drawEllipse({centro.getx(), centro.gety()},radio, radio);

}

};

#endif // CIRCLE_H
