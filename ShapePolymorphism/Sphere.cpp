#include "Sphere.h"

// Sphere constructor
Sphere::Sphere(double r) : radius(r) {}

// getArea method
double Sphere::getArea() const {
    return 4 * M_PI * radius * radius;
}

// getName method
std::string Sphere::getName() const {
    return "Sphere";
}
