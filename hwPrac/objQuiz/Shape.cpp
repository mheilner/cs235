//
// Created by markh on 1/23/2023.
//

#include "Shape.h"
using namespace std;

//std::string Shape::toString() const{return "This is a generic shape.";}
std::string Circle::toString() const{return "This is a Circle with radius of " + to_string(radius);}
std::string Rectangle::toString() const{return "This is a Rectangle with length of "
+ to_string(length) + " and a width of " + to_string(width);}
std::string Triangle::toString() const{return "This is a Triangle with base of "
                                               + to_string(base) + " and a height of " + to_string(height);}
