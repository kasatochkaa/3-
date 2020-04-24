#include <iostream>
#include <cmath>

#include "Point.h"

double Point::getY() const {
	return this->y;
}

void Point::setY(const double val) {
	this->y = val;
}

double Point::getX() const {
	return this->x;
}

void Point::setX(const double val) {
	this->x = val;
}

double Point::to(const Point *p) {
	const double x1 = this->x;
	const double y1 = this->y;
	const double x2 = p->x;
	const double y2 = p->x;

	return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

void Point::print() const{
	std::cout << "Point" << std::endl;
	std::cout << "X: " << this->x << std::endl;
	std::cout << "Y: " << this->y << std::endl;
}

Point& Point::operator= (const Point &obj) {

	x = obj.x;
	y = obj.y;

	return *this;
}
