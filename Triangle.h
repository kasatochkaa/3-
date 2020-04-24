#ifndef TRIANGLE_H_INCLUDED
#define TRIANGLE_H_INCLUDED

#include "Figure.h"
#include "Point.h"

class Triangle : public Figure {

private:
	Point p1;
	Point p2;
	Point p3;

public:
	Triangle() {};
	Triangle(Point val1, Point val2, Point val3) : p1(val1), p2(val2), p3(val3) {}
	Triangle(const Triangle &copy) : p1(copy.p1), p2(copy.p2), p3(copy.p3) {}

	Point getP1();
	void setP1(Point p);

	Point getP2();
	void setP2(Point p);

	Point getP3();
	void setP3(Point p);

	void print();

	double getPerimeter() override;
	double getArea() override;

	Triangle& operator= (const Triangle &obj);

};


#endif // TRIANGLE_H_INCLUDED
