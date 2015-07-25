#include <iostream>
#include "OperatorOverloading.h"

using namespace std;

OperatorOverloading::OperatorOverloading()
{
}

OperatorOverloading::OperatorOverloading(int x)
{
	num = x;
}

OperatorOverloading OperatorOverloading::operator+(OperatorOverloading oo)
{
	OperatorOverloading newObject;
	newObject.num = num + oo.num;
	return newObject;
}