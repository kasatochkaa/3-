#include <iostream>
#include <cmath>

#include "Triangle.h"

double Triangle::getPerimeter() const{

	return p1.to(&p2) +
		   p1.to(&p3) +
		   p2.to(&p3);
}

double Triangle::getArea() const {
	/**
	*  Площадь треугольника по координатам
	* находим через определитель 2-го порядка:
	*
	*      |       | x1 - x3, y1 - y3 | |
	* S =  | 0.5 * |                  | | = | 0.5 * ((x1-x3)(y2-y3) - (y1-y3)(x2-x3)) |
	*      |       | x2 - x3, y2 - y3 | |
	**/

	double x1 = p1.getX() const;
	double x2 = p2.getX()const;
	double x3 = p3.getX()const;
	double y1 = p1.getY()const;
	double y2 = p2.getY()const;
	double y3 = p3.getY()const;

	return abs( 0.5 * ((x1-x3)*(y2-y3) - (y1-y3)*(x2-x3)) );
}

void Triangle::print()const {
	std::cout << "Triangle" << std::endl;
	std::cout << "P1: (" << p1.getX() << ", " << p1.getY() << ")" << std::endl;
	std::cout << "P2: (" << p2.getX() << ", " << p2.getY() << ")" << std::endl;
	std::cout << "P2: (" << p3.getX() << ", " << p3.getY() << ")" << std::endl;
	std::cout << "Perimeter: " << getPerimeter() << std::endl;
	std::cout << "Area: " << getArea() << std::endl;
}

Point Triangle::getP1()const {
	return this->p1;
}

void Triangle::setP1( const Point p) {
	this->p1 = p;
}

Point Triangle::getP2() const {
	return this->p2;
}

void Triangle::setP2(const Point p) {
	this->p2 = p;
}

Point Triangle::getP3()const {
	return this->p3;
}

void Triangle::setP3(const Point p) {
	this->p3 = p;
}

Triangle& Triangle::operator= (const Triangle &obj) {

	p1 = obj.p1;
	p2 = obj.p2;
	p3 = obj.p3;

	return *this;
}
