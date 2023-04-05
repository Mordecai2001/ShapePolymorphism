#include "Circle.h"

// Circle constructor
Circle::Circle(double r) : radius(r) {}

// getArea method
double Circle::getArea() const {
    return M_PI * radius * radius;
}

// getName method
std::string Circle::getName() const {
    return "Circle";
}
