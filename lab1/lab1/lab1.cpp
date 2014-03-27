// lab1.cpp: определяет точку входа для консольного приложения.
//
#pragma once
#include "stdafx.h"
#include <vector>
#include <iostream>
#include "good.h"
#include <string>

using std::cin;
using std::cout;
using std::endl;

int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	std::string nameBuff("");
	int countBuff(0),summaryPrice(0);
	double priceBuff(0.0f);

	cin >> n;

	std::vector<good> goods(n);

	for (int i = 0; i<=n; i++)
	{
		cin >> nameBuff >> countBuff >>	priceBuff;
		goods[i] =  good( nameBuff, countBuff, priceBuff );
		summaryPrice += goods[i].getSumPrice();
		cout << "Current summary price: " << summaryPrice << endl;
	}

	return 0;
}

