 #ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>
#include <points.h>
#include <figure.h>

using namespace std;

class triangle : public figure
{
private:

    int heigh;
    int post_x;
    int post_y;

public:

    triangle(const string &  _color="",int _heigh=1, int _post_x=0, int _post_y=0);

      ~triangle();

void draw(QPainter* painter)
{

    painter->drawLine(post_x,post_y,post_x-heigh/2,post_y+heigh);//primera linea
    painter->drawLine(post_x+heigh/2,post_y+heigh,post_x,post_y);//segunda linea
    painter->drawLine(post_x-heigh/2,post_y+heigh,post_x+heigh/2,post_y+heigh);//linea horizontal
}

};
#endif // TRIANGLE_H
