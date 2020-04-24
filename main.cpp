#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"

int main() {

	Point p1(1, 10);
	Point p2(10, 1);
	Point p3(1, 1);

	Rectangle rect(p1, p2);
	rect.print();

	Triangle tr(p1, p2, p3);
	tr.print();

	Circle circ(p1, 100);
	circ.print();

	return 0;
}
