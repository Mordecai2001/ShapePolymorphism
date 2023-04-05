#pragma once
#include "ThreeDimensionalShape.h"
#include <cmath>

// Tetrahedron class
class Tetrahedron : public ThreeDimensionalShape {
    double edge;

public:
    Tetrahedron(double e);

    double getArea() const override;

    std::string getName() const override;
};
