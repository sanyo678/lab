#pragma once
class Arr
{
public:
	int*		a;
	int			length;
				Arr(void);
				Arr(Arr&);
	Arr			operator+(Arr&);
	int			operator[](int);
				~Arr(void);
};

