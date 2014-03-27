#include "Rect.hpp"
using std::cout;
using std::endl;

Rect::Rect(double l, double w)
	:length(l),
	width(w)
{
}

double Rect::getSquare()
{
	return length*width;
}

void Rect::print()
{
	cout<<endl;
	cout<<"Rectangle: "<<endl<<"  width = "<<width<<"  height = "<<length<<" Square = "<<getSquare()<<endl;
}

Rect::~Rect(void)
{
}
