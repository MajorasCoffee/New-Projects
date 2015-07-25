#include "ClassExamples.h"
#include <iostream>

using namespace std;


ClassExamples::ClassExamples(int x, int y)
	:apples(x),oranges(y)//member initializer needed for constant value when not predefined
{
}

void ClassExamples::PrintPV()
{
	cout << "Apples = " << apples << " Oranges = " << oranges << endl;
}