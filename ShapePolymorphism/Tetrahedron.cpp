#include "Tetrahedron.h"

// Tetrahedron constructor
Tetrahedron::Tetrahedron(double e) : edge(e) {}

// getArea method
double Tetrahedron::getArea() const {
    return sqrt(3) * edge * edge;
}

// getName method
std::string Tetrahedron::getName() const {
    return "Tetrahedron";
}
