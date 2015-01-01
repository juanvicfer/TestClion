#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle: public Shape
{
public:
    Rectangle(int height, int width) : height(height), width(width)
    {
    }

    ~Rectangle(){};

    virtual void display();

private:

    int height, width;
};

#endif