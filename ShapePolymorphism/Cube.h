#pragma once
#include "ThreeDimensionalShape.h"

// Cube class
class Cube : public ThreeDimensionalShape {
    double side;

public:
    Cube(double s);

    double getArea() const override;

    std::string getName() const override;
};
