//
// Created by krato on 12.06.2024.
//

#ifndef SHAPE_H
#define SHAPE_H



class Shape {

public:

    Shape();

    virtual ~Shape();

    virtual float calc_perimeter() = 0;

    virtual float calc_area() = 0;

};



#endif //SHAPE_H
