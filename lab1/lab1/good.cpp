#include "stdafx.h"
#include "good.h"


good::good(void)
{
}

good::good(std::string name, int count, double price)
	: mName(name),
	  mCount(count),
	  mPrice(price)
{
}

int good::getSumPrice()
{
	return mCount*mPrice;
}
