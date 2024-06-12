//
// Created by krato on 12.06.2024.
//

#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"


class Circle : public Shape {

protected:
    float radius;

public:
    Circle(float radius);

    ~Circle();

    float get_radius();

    void set_radius(float radius);

    float calc_perimeter() override;

    float calc_area() override;

};



#endif //CIRCLE_H
