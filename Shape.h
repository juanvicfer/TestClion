
#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
public:
    virtual ~Shape(){};

    virtual void display() = 0;
};

#endif