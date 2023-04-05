#include <iostream>
#include <vector>
#include "Circle.h"
#include "Square.h"
#include "Triangle.h"
#include "Cube.h"
#include "Sphere.h"
#include "Tetrahedron.h"
#include "MoveableShape.h"


int main() {
    Circle circle(5);
    std::cout << "Name: " << circle.getName() << ", Area: " << circle.getArea() << std::endl;

    // Test the level 3 classes
    std::vector<Shape*> shapes;
    shapes.push_back(new Circle(3));
    shapes.push_back(new Square(4));
    shapes.push_back(new Triangle(3, 4));
    shapes.push_back(new Cube(2));
    shapes.push_back(new Sphere(5));
    shapes.push_back(new Tetrahedron(3));

    for (const auto& shape : shapes) {
        std::cout << "Name: " << shape->getName() << ", Area: " << shape->getArea() << std::endl;
        delete shape;
    }

    return 0;
}
