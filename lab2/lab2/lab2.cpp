#pragma once
#include "Arr.h"
#include <iostream>
using std::cout;

void main()
{
	int* p = new int[5];
	p[0] = 0;
	p[1] = 1;
	p[2] = 2;
	p[3] = 3;
	p[4] = 4;
	Arr A;
	A.a = p;
	A.length = 5;

	Arr B(A);

	cout<<B[2];

	system("pause");
}