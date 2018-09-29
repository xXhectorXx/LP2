#ifndef FIGURE_H
#define FIGURE_H
#include <iostream>
#include <cstring>
#include <QPainter>

using namespace std;

class figure
{
protected:

    string color;
    int tamlado;

public:

    figure(const string & _color="",int tamlado=0);
    virtual ~figure()=default;
    virtual void draw(QPainter * painter)=0;
};

#endif // FIGURE_H
