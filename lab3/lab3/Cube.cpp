#include "Cube.hpp"
using std::cout;
using std::endl;

Cube::Cube(double l, double w, double h)
	:Rect(l,w),
	height(h)
{
}

void Cube::print()
{
	cout<<endl;
	cout<<"Parallelepiped: "<<endl<<"  width = "<<width<<"  length = "<<length<<"  height = "<<height<<"  Volume = "<<getVolume()<<endl;
}

double Cube::getVolume()
{
	return height*getSquare();
}

Cube::~Cube(void)
{
}
