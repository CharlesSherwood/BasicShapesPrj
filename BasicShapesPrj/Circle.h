#pragma once
#include "BasicShape.h"

class Circle : public BasicShape {
private:
    double xCenter;
    double yCenter;
    double radius;

public:
    Circle(double x, double y, double r, string n = "Circle");

    void calcArea() override;

    double getXCenter() const { return xCenter; }
    double getYCenter() const { return yCenter; }
    double getRadius() const { return radius; }

    void setXCenter(double x) { xCenter = x; }
    void setYCenter(double y) { yCenter = y; }
    void setRadius(double r) { radius = r; calcArea(); }
};