#include "Deconstructor.h"
#include <iostream>

using namespace std;


Deconstructor::Deconstructor()
{
	cout << "Constructor" << endl;
}

Deconstructor::~Deconstructor()
{
	cout << "destroyed" << endl;
	system("PAUSE");
}
