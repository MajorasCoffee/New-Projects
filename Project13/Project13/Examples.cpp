#include "Examples.h"
#include <iostream>

using namespace std;


Examples::Examples()
{
}

Examples::Examples(int a)
{
	num = a;
}

Examples Examples::operator+(Examples eo1)
{
	Examples ao2;
	ao2.num = num + eo1.num;
	return(ao2);
	/*'a' is treated as the object, you pass in 'b' as the argument
	you create a new object
	the new object.num = num('a' which is treated as the current object) + b.num(the argument passed in)
	so new object = 20 + 40
	return new object with its num with a value of 60
	*/
}

