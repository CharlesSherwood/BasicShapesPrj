#include <iostream>
#include <iomanip>
#include "BasicShape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"

using namespace std;

int main() {
    cout << fixed << setprecision(4);
    cout << "==============================" << endl;
    cout << "   Basic Shapes - Polymorphism" << endl;
    cout << "==============================" << endl;

    //Construction Tests 
    Rectangle rect1(5.0, 3.0, "Rectangle 1");
    Rectangle rect2(8.0, 2.5, "Rectangle 2");
    Circle    circ1(0, 0, 4.0, "Circle 1");
    Circle    circ2(1, 2, 7.5, "Circle 2");
    Square    sq1(6.0, "Square 1");

    // Store all in a BasicShape* array (Polymorphism!)
    BasicShape* shapes[5] = { &rect1, &rect2, &circ1, &circ2, &sq1 };

    cout << "\n Polymorphism Test: Initial Areas " << endl;
    for (int i = 0; i < 5; i++) {
        cout << shapes[i]->getName() << " area: " << shapes[i]->getArea() << endl;
    }

    //Setter Tests: Circle 
    cout << "\n Setter Test: Circle 1 " << endl;
    cout << "Before setRadius(10): area = " << circ1.getArea() << endl;
    circ1.setRadius(10.0);
    cout << "After  setRadius(10): area = " << circ1.getArea() << " (expected: " << 3.14159265 * 100 << ")" << endl;

    cout << "\n Setter Test: Circle 2 (setXCenter/setYCenter don't change area) " << endl;
    cout << "Before setXCenter: area = " << circ2.getArea() << endl;
    circ2.setXCenter(5.0);
    circ2.setYCenter(5.0);
    cout << "After  setXCenter/YCenter: area = " << circ2.getArea() << " (unchanged, correct)" << endl;

    //Setter Tests: Rectangle 
    cout << "\n Setter Test: Rectangle 1 " << endl;
    cout << "Before setLength(10): area = " << rect1.getArea() << endl;
    rect1.setLength(10.0);
    cout << "After  setLength(10): area = " << rect1.getArea() << " (expected: 30.0)" << endl;
    cout << "Before setWidth(4): area = " << rect1.getArea() << endl;
    rect1.setWidth(4.0);
    cout << "After  setWidth(4):  area = " << rect1.getArea() << " (expected: 40.0)" << endl;

    //Setter Tests: Square 
    cout << "\n Setter Test: Square 1 " << endl;
    cout << "Before setSide(9): area = " << sq1.getArea() << endl;
    sq1.setSide(9.0);
    cout << "After  setSide(9): area = " << sq1.getArea() << " (expected: 81.0)" << endl;
    cout << "  Rectangle length: " << sq1.getLength() << ", width: " << sq1.getWidth() << " (both should be 9)" << endl;

    //Final polymorphism pass
    cout << "\n Final Polymorphism Loop (after all setters) " << endl;
    for (int i = 0; i < 5; i++) {
        cout << shapes[i]->getName() << " area: " << shapes[i]->getArea() << endl;
    }

    cout << "\nAll tests complete." << endl;
    return 0;
}