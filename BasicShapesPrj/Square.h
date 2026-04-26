#pragma once
#include "Rectangle.h"

class Square : public Rectangle {
private:
    double side;

public:
    Square(double s, string n = "Square");

    double getSide() const { return side; }
    void setSide(double s);
};