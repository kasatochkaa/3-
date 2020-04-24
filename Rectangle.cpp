#include <iostream>
#include <cmath>

#include "Rectangle.h"

double Rectangle::getWidth() const {
	return abs(topLeft.getX() - bottomRight.getX());
}

double Rectangle::getHeight() const {
	return abs(topLeft.getY() - bottomRight.getY());
}

double Rectangle::getPerimeter() const {

	return (getWidth() + getHeight()) * 2;
}

double Rectangle::getArea() const {

	return getWidth() * getHeight();
}

void Rectangle::print() const {
	std::cout << "Rectangle" << std::endl;
	std::cout << "Top left point: (" << topLeft.getX() << ", " << topLeft.getY() << ")" << std::endl;
	std::cout << "Bottom right point: (" << bottomRight.getX() << ", " << bottomRight.getY() << ")" << std::endl;
	std::cout << "Perimeter: " << getPerimeter() << std::endl;
	std::cout << "Area: " << getArea() << std::endl;
}

Point Rectangle::getTopLeft() const {
	return topLeft;
}

void Rectangle::setTopLeft(const Point p) {
	topLeft = p;
}


Point Rectangle::getBottomRight() const {
	return bottomRight;
}

void Rectangle::setBottomRight(const Point p) {
	bottomRight = p;
}

Rectangle& Rectangle::operator= (const Rectangle &obj) {

	topLeft = obj.topLeft;
	bottomRight = obj.bottomRight;

	return *this;
}
