#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

#include "Figure.h"
#include "Point.h"

class Rectangle : public Figure {

private:
	Point topLeft;
	Point bottomRight;

public:
	Rectangle() {};
	Rectangle(
		const Point p1,
		const Point p2) : topLeft(p1), bottomRight(p2) {}
	Rectangle(const Rectangle &copy) : topLeft(copy.topLeft), bottomRight(copy.bottomRight) {}

	Point getTopLeft() const;
	void setTopLeft(const Point p);

	Point getBottomRight() const;
	void setBottomRight(const Point p);

	void print() const;

	double getPerimeter() override const;
	double getArea() override const;

	double getWidth() const;
	double getHeight() const;

	Rectangle& operator= (const Rectangle &obj);

};

#endif // RECTANGLE_H_INCLUDED
