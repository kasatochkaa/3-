#include <iostream>
#include <cmath>

#include "Rectangle.h"

double Rectangle::getWidth() {
	return abs(topLeft.getX() - bottomRight.getX());
}

double Rectangle::getHeight() {
	return abs(topLeft.getY() - bottomRight.getY());
}

double Rectangle::getPerimeter() {

	return (getWidth() + getHeight()) * 2;
}

double Rectangle::getArea() {

	return getWidth() * getHeight();
}

void Rectangle::print() {
	std::cout << "Rectangle" << std::endl;
	std::cout << "Top left point: (" << topLeft.getX() << ", " << topLeft.getY() << ")" << std::endl;
	std::cout << "Bottom right point: (" << bottomRight.getX() << ", " << bottomRight.getY() << ")" << std::endl;
	std::cout << "Perimeter: " << getPerimeter() << std::endl;
	std::cout << "Area: " << getArea() << std::endl;
}

Point Rectangle::getTopLeft() {
	return topLeft;
}

void Rectangle::setTopLeft(const Point p) {
	topLeft = p;
}


Point Rectangle::getBottomRight() {
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
