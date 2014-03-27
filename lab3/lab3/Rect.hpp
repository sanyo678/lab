#pragma once
#include <iostream>

class Rect
{
public:
						Rect(double, double);
	virtual void		print();
						~Rect(void);

protected:
	double		length;
	double		width;
	double		getSquare();
};

