#pragma once
#include <string>
using namespace std;

class BasicShape {
private:
    double area;
    string name;

public:
    double getArea() const { return area; }
    void setArea(double a) { area = a; }

    string getName() const { return name; }
    void setName(string n) { name = n; }

    virtual void calcArea() = 0;
};