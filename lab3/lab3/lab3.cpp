#include "Cube.hpp"

void main()
{
	double length(5.0);
	double width(3.0);
	double height(4.0);

	Rect* p;

	Rect R(length,width);
	Cube C(length,width,height);

	p = &R;
	p->print();
	p = &C;
	p->print();

	system("pause");
}