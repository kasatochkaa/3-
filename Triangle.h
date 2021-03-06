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
	Triangle(
		const Point val1,
		const Point val2,
		const Point val3) : p1(val1), p2(val2), p3(val3) {}
	Triangle(const Triangle &copy) : p1(copy.p1), p2(copy.p2), p3(copy.p3) {}

	Point getP1()const;
	void setP1(const Point p);

	Point getP2()const;
	void setP2(const Point p);

	Point getP3()const;
	void setP3(const Point p);

	void print()const;

	double getPerimeter() override const;
	double getArea() override const;

	Triangle& operator= (const Triangle &obj);

};


#endif // TRIANGLE_H_INCLUDED
