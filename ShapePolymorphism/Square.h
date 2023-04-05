#pragma once
#include "TwoDimensionalShape.h"

// Square class
class Square : public TwoDimensionalShape {
    double side;

public:
    Square(double s);

    double getArea() const override;

    std::string getName() const override;
};
