//
// Created by krato on 12.06.2024.
//

#include "Circle.h"

#include <cmath>


Circle::Circle(float radius) {
    this->radius = radius;
}

Circle::~Circle() {
}

float Circle::get_radius() {
    return radius;
}

void Circle::set_radius(float radius) {
    this->radius = radius;
}

float Circle::calc_perimeter() {
    return 2 * radius * M_PI;
}

float Circle::calc_area() {
    return M_PI * radius * radius;
}
