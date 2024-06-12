//
// Created by krato on 12.06.2024.
//

#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"


class Rectangle : public Shape {

protected:
    float first_side;
    float second_side;

public:
    Rectangle(float first_side, float second_side);

    ~Rectangle();

    float get_first_side() const;

    float get_second_side() const;

    void set_first_side(float first_side);

    void set_second_side(float second_side);

    float calc_perimeter() override;

    float calc_area() override;
};



#endif //RECTANGLE_H
