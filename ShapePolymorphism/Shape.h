#pragma once
#include <string>

// Shape class
class Shape {
public:
    virtual double getArea() const = 0;
    virtual std::string getName() const = 0;
};