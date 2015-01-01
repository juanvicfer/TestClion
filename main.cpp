
#include "Shape.h"
#include "Rectangle.h"

int main() {

    Rectangle rectangle(2,1);

    rectangle.display();

    Shape& s(rectangle);

    s.display();

    return 0;
}