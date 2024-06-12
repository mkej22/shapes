//
// Created by krato on 12.06.2024.
//

#include "Rectangle.h"

Rectangle::Rectangle(float first_side, float second_side) {
    this->first_side = first_side;
    this->second_side = second_side;
}

Rectangle::~Rectangle() {
}


float Rectangle::get_first_side() const {
    return first_side;
}

float Rectangle::get_second_side() const {
    return second_side;
}

void Rectangle::set_first_side(float first_side) {
    this->first_side = first_side;
}

void Rectangle::set_second_side(float second_side) {
    this->second_side = second_side;
}

float Rectangle::calc_area() {
    return first_side * second_side;
}

float Rectangle::calc_perimeter() {
    return (first_side + second_side) * 2;
}
