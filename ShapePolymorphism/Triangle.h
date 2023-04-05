#pragma once
#include "TwoDimensionalShape.h"

// Triangle class
class Triangle : public TwoDimensionalShape {
    double base;
    double height;

public:
    Triangle(double b, double h);

    double getArea() const override;

    std::string getName() const override;
};
