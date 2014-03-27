#pragma once
#include <string>

class good
{
public:
	good(std::string name, int count, double price);
	good(void);

private:
	std::string		mName;
	int				mCount;
	double			mPrice;

public:
	int				getSumPrice();
};

