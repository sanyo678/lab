#pragma once
#include "Rect.hpp"
#include <iostream>

class Cube : public Rect
{
public:
					Cube(double, double, double);
	void			print();
					~Cube(void);

protected:
	double			height;
	double			getVolume();
};

