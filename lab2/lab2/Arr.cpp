#include "Arr.h"


Arr::Arr(void)
	:a(nullptr),
	length(0)
{
}

Arr::Arr(Arr& A)
{
	size_t size = A.length*sizeof(int);
	a=new int(size);
	length = A.length;
	for (int i=0; i < A.length; i++)
	{
		a[i]=A.a[i];
	}

}

int Arr::operator[](int i)
{
	if (i>length-1)
		return 0;
	else 
		return a[i];
}

Arr Arr::operator+(Arr& A)
{
	if (length>A.length)
	{
		Arr newArr(*this);
		for (int i=0;i<length;i++)
			newArr.a[i]= (*this)[i] + A[i];
		return newArr;
	} else
	{
		Arr newArr(A);
		for (int i=0;i<A.length;i++)
			newArr.a[i] = (*this)[i] + A[i];
		return newArr;
	}
}


Arr::~Arr(void)
{
	delete []a;
}
