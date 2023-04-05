#include "Cube.h"

// Cube constructor
Cube::Cube(double s) : side(s) {}

// getArea method
double Cube::getArea() const {
    return 6 * side * side;
}

// getName method
std::string Cube::getName() const {
    return "Cube";
}
