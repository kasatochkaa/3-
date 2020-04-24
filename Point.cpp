#include <iostream>
#include <cmath>

#include "Point.h"

double Point::getY() {
	return this->y;
}

void Point::setY(double val) {
	this->y = val;
}

double Point::getX() {
	return this->x;
}

void Point::setX(double val) {
	this->x = val;
}

double Point::to(Point *p) {
	double x1 = this->x;
	double y1 = this->y;
	double x2 = p->x;
	double y2 = p->x;

	return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

void Point::print() {
	std::cout << "Point" << std::endl;
	std::cout << "X: " << this->x << std::endl;
	std::cout << "Y: " << this->y << std::endl;
}

Point& Point::operator= (const Point &obj) {

	x = obj.x;
	y = obj.y;

	return *this;
}
