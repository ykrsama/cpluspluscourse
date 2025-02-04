#include "Polygons.hpp"
#include <iostream>
#include <cmath>

#define PI 3.14159265

Polygon::Polygon(int n, float radius) {
    m_nbSides = new int;
    m_radius = new float;
    *m_nbSides = n;
    *m_radius = radius;
    std::cout << "Construct Polygon\n";
};

Polygon::~Polygon() {
    delete m_nbSides;
    delete m_radius;
}

// Create a copy constructor in Polygon

void Polygon::setNbSides(int n) {
    *m_nbSides = n;
}

void Polygon::setRadius(float r) {
    *m_radius = r;
}

float Polygon::computePerimeter() {
    //std::cout << "Generic computePerimeter for polygons" << std::endl;
    return 2 * *m_nbSides * sin( PI / *m_nbSides ) * *m_radius;
}

Pentagon::Pentagon(float radius) : Polygon(5, radius) {}

Hexagon::Hexagon(float radius) : Polygon(6, radius) {
    std::cout << "Construct Hexagon\n";
}

// Create a copy constructor in Hexagon

float Hexagon::computePerimeter() {
    //std::cout << "Optimized computePerimeter for hexagons" << std::endl;
    return 6 * *m_radius;
}
