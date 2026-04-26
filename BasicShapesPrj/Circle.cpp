#include "Circle.h"
#define _USE_MATH_DEFINES
#include <cmath>
#include<iostream>

#include <numbers>
double M_PI = numbers::pi;


using namespace std;

Circle::Circle(double x, double y, double r, string n) {
    xCenter = x;
    yCenter = y;
    radius = r;
    setName(n);
    calcArea();
}

void Circle::calcArea() {
    setArea(M_PI * radius * radius);
}