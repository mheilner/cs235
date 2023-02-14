//
// Created by markh on 1/23/2023.
//
#include <string>
#include <iostream>
#include <sstream>
#include <math.h>
#ifndef OBJQUIZ_SHAPE_H
#define OBJQUIZ_SHAPE_H


class Shape {
public:
//    Shape(){}
    virtual std::string toString() const= 0;
    virtual void printParameters() const= 0; //const{ std::cout << "none";}
    virtual void printArea() const= 0; // const{ std::cout << "Not Applicable";}
    virtual double getArea() const= 0;
};
class Circle : public Shape
{
private:
    double radius = 0;
public:
    Circle(double rad): radius(rad){};
    std::string toString() const;
    void printParameters() const{ std::cout << "P1 - Radius: " << radius << std::endl;}
    void printArea() const{ std::cout << "Area of the Circle is: " << std::to_string(radius*radius*3.14159) << std::endl;;}
    double getArea()const{
        return radius*radius*3.14159;
    }
};
class Rectangle : public Shape
{
private:
    double length;
    double width;
public:
    Rectangle(double len, double w):length(len), width(w){};
    std::string toString() const;
    void printParameters() const{ std::cout << "P1 - Length: " << length << " P2 - Width: " << width << std::endl;}
    void printArea() const{
        std::cout << "Area of the Rectangle is: " << std::to_string(length*width) << std::endl;;}
    double getArea()const{
        return length*width;
    }
};
class Triangle : public Shape
{
private:
    double base = 0;
    double height = 0;
public:
    Triangle(double b, double h): base(b), height(h){};
    std::string toString() const;
    void printParameters() const{ std::cout << "P1 - Base: " << base << " P2 - Height: " << height << std::endl;}
    void printArea() const{ std::cout << "Area of the Triangle is: " << std::to_string(.5*base*height) << std::endl;;}
    double getArea()const{
        return .5 * base * height;
    }
};


#endif //OBJQUIZ_SHAPE_H
