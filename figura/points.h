#ifndef POINTS_H
#define POINTS_H

#include<iostream>
#include<cstring>
#include<QPainter>
#include<stdlib.h>

using namespace std;

class points
{
protected:

    int x;
    int y;

public:
    points(const int & _x=0,const int & _y=0);
    virtual ~points()=default;
    int getx(){
        return x;
    }
    int gety(){
        return y;
    }
    void set_xy(int _x, int _y);
    friend ostream & operator <<(ostream & os, const points & p);
};

#endif // POINTS_H
