#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED

#include "Figure.h"
#include "Point.h"

#define PI 3.141592653589793238463

class Circle : public Figure {

private:
	Point center;
	double radius;

public:
	Circle() {}
	Circle(
		const Point c,
		const double r) : center(c), radius(r) {}
	Circle(const Circle &copy) : center(copy.center), radius(copy.radius) {}

	double getRadius();
	void setRadius(const double val);
	Point getCenter();
	void setCenter(const Point val);

	void print();

	double getPerimeter() override;
	double getArea() override;

	Circle& operator= (const Circle &obj);

};

#endif // CIRCLE_H_INCLUDED
