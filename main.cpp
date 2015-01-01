
#include "Shape.h"
#include "Rectangle.h"

static const int height = 2;
static const int width = 1;

int main() {

    Rectangle rectangle(height, width);

    rectangle.display();

    Shape& s(rectangle);

    s.display();

    return 0;
}