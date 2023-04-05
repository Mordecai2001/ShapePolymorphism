#pragma once
#include "TwoDimensionalShape.h"

// Circle class
class Circle : public TwoDimensionalShape {
    double radius;
    const double M_PI = 3.1415926;

public:
    Circle(double r);

    double getArea() const override;

    std::string getName() const override;
};
