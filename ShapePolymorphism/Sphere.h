#pragma once
#include "ThreeDimensionalShape.h"

// Sphere class
class Sphere : public ThreeDimensionalShape {
    double radius;
    const double M_PI = 3.1415926;

public:
    Sphere(double r);

    double getArea() const override;

    std::string getName() const override;
};

