#include "Polygons.hpp"
#include <iostream>

int main() {
    Hexagon hexa1(1);
    Hexagon hexa2 = hexa1;
    std::cout << "Hexagon1,2 Perimter : " << hexa1.computePerimeter() << '\n';
    std::cout << "Set Hexagon1 radius to 3\n";
    hexa1.setRadius(3);
    std::cout << "Hexagon1 Perimter : " << hexa1.computePerimeter() << '\n';
    std::cout << "Hexagon2 Perimter : " << hexa2.computePerimeter() << '\n';
}
