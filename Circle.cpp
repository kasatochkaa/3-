#include <iostream>

#include "Circle.h"

double Circle::getPerimeter() const {

	return 2 * PI * radius;
}

double Circle::getArea() const  {

	return PI * radius * radius;
}

void Circle::print() const {

	std::cout << "Circle" << std::endl;
	std::cout << "Center: (" << center.getX() << ", " << center.getY() << ")" << std::endl;
	std::cout << "Radius: " << radius << std::endl;
	std::cout << "Area: " << getArea() << std::endl;
	std::cout << "Perimeter: " << getPerimeter() << std::endl;
}

double Circle::getRadius() const{

	return radius;
}

void Circle::setRadius( const double val) {

	radius = val;
}

Point Circle::getCenter() const {

	return center;
}

void Circle::setCenter(const Point val) {

	center = val;
}

Circle& Circle::operator= (const Circle &obj) {

	center = obj.center;
	radius = obj.radius;

	return *this;
}
