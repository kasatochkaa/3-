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
	Rectangle(Point p1, Point p2) : topLeft(p1), bottomRight(p2) {}
	Rectangle(const Rectangle &copy) : topLeft(copy.topLeft), bottomRight(copy.bottomRight) {}

	Point getTopLeft();
	void setTopLeft(Point p);

	Point getBottomRight();
	void setBottomRight(Point p);

	void print();

	double getPerimeter() override;
	double getArea() override;

	double getWidth();
	double getHeight();

	Rectangle& operator= (const Rectangle &obj);

};

#endif // RECTANGLE_H_INCLUDED
