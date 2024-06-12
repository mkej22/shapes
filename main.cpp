#include <iostream>

#include "shapes/Rectangle.h"
#include "shapes/Circle.h"

using namespace std;

int main() {
    int choice;

    cout << "Choose a shape:" << endl;
    cout << "1. Rectangle" << endl;
    cout << "2. Circle" << endl;
    cout << "Choice:";

    Shape* shape;

    bool invalid_choice = true;

    while(invalid_choice) {
        cin >> choice;

        switch (choice) {
            case 1:
                float first_side, second_side;
                cout << "Insert length of first side:";
                cin >> first_side;
                cout << "Insert length of second side:";
                cin >> second_side;
                shape = new Rectangle(first_side, second_side);
                invalid_choice = false;
                break;
            case 2:
                float radius;
                cout << "Insert radius:";
                cin >> radius;
                shape = new Circle(radius);
                invalid_choice = false;
                break;
            default:
                cout << "Bad option!!!" << endl;
                break;
        }
    }

    cout << "Area: " << shape->calc_area() << endl;
    cout << "Perimeter: " << shape->calc_perimeter() << endl;

    return 0;
}



