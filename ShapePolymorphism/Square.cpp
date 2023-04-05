#include "Square.h"

// Square constructor
Square::Square(double s) : side(s) {}

// getArea method
double Square::getArea() const {
    return side * side;
}

// getName method
std::string Square::getName() const {
    return "Square";
}
