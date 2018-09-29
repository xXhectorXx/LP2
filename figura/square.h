#ifndef SQUARE_H
#define SQUARE_H
#include <iostream>
#include "figure.h"
#include "points.h"

class square : public figure
{
private:
    points slados;

public:
  square(const string &  _color="",points _slados =0, int _tamlado=0);
    ~square();

void draw(QPainter* painter)
{
    painter->drawRect(slados.getx(), slados.getx(), tamlado, tamlado);
}
};

#endif // SQUARE_H
