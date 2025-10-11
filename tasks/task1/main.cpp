#include <iostream>
#include "Point.hpp"
#include "Figure.hpp"

int main() {
    Figure f1, f2;

    f1.addPoint(Point(0, 0));
    f1.addPoint(Point(1, 0));
    f1.addPoint(Point(1, 1));
    f1.addPoint(Point(0, 1));

    f1 = f2;
    f2 = std::move(f1);
    Figure f3 = f2;
    Figure f4 = std::move(f3);
    return 0;
}