#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

class Point {

private:
	double x;
	double y;

public:
	Point() {}
	Point(
		const double v1,
		const double v2) : x(v1), y(v2) {}
	Point(const Point &copy) : x(copy.x), y(copy.y) {}

	double getY();
	void setY(const double val);
	double getX();
	void setX(const double val);

	double to(const Point *p);
	void print();

	Point& operator= (const Point &obj);

};

#endif // POINT_H_INCLUDED
