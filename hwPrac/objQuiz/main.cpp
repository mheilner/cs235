#include <iostream>
#include <vector>
#include "Shape.h"
using namespace std;
int main() {
//    Shape s1;
//    cout << "Init the shape" << endl;
//    cout << s1.toString() << endl;
//    cout << "params: "; s1.printParameters();cout << endl;
//    cout << "area: "; s1.printArea();

    Circle c1(12);
    cout << "Init the circle" << endl;
    cout << c1.toString() << endl;
    cout << "params: "; c1.printParameters();cout << endl;
    c1.printArea();

    Rectangle r1(12, 24);
    cout << "Init the rectangle" << endl;
    cout << r1.toString() << endl;
    cout << "params: "; r1.printParameters();
    r1.printArea();

//    Shape* sPtr = &s1;
    Circle* cPtr = &c1;
    cPtr = new Circle(10);
    //Question 1 of Pointer and Inheritance HW
    cout << "Question 1" << endl;
    cPtr->printArea();
    //Question 2
    Shape *sPtr2 = new Circle(4);
//    cout << "Question 2" << endl;
//    sPtr2->getArea();
    //Q3
    cout << "Question 3" << endl;
    sPtr2->printArea();
    //Q4
    cout << "Q4" << endl;

    //Q5
    vector<Shape *> shapeVec;
    shapeVec.push_back(new Circle(2));
    shapeVec.push_back(new Circle(10));
    shapeVec.push_back(new Rectangle(3,9));
    shapeVec.push_back(new Rectangle(4,30));
    for(Shape* s : shapeVec){
        cout << s->toString() << endl;
        cout << s->getArea() << endl;

    }

    Triangle t1();

    return 0;
}
