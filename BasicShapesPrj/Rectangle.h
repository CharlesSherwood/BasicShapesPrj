#pragma once
#include "BasicShape.h"

class Rectangle : public BasicShape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w, string n = "Rectangle");

    void calcArea() override;

    double getLength() const { return length; }
    double getWidth() const { return width; }

    void setLength(double l) { length = l; calcArea(); }
    void setWidth(double w) { width = w; calcArea(); }
};