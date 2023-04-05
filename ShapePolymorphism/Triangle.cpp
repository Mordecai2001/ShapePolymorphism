#include "Triangle.h"

// Triangle constructor
Triangle::Triangle(double b, double h) : base(b), height(h) {}

// getArea method
double Triangle::getArea() const {
    return 0.5 * base * height;
}

// getName method
std::string Triangle::getName() const {
    return "Triangle";
}
