#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

class Point {

private:
	double x;
	double y;

public:
	Point() {}
	Point(double v1, double v2) : x(v1), y(v2) {}
	Point(const Point &copy) : x(copy.x), y(copy.y) {}

	double getY();
	void setY(double val);
	double getX();
	void setX(double val);

	double to(Point *p);
	void print();

	Point& operator= (const Point &obj);

};

#endif // POINT_H_INCLUDED
