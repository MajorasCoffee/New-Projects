#include "Examples.h"
#include <iostream>

using namespace std;

Examples::Examples(int x)
	:x(x)
{
}

void Examples::example() {
	cout << "int x = " << x << " using - x" << endl;
	cout << "int x = " << this->x << " using - this->x" << endl; //meaning the object that called this function, so "eo" in Source.cpp
	cout << "int x = " << (*this).x << " using - (*this).x" << endl; //dereferencing this, it gets the memory location of this and accesses its function
}

