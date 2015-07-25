#include <iostream>
#include "Arrow.h"
using namespace std;

int main() 
{
	Arrow arrowObject;
	Arrow *arrowPointer = &arrowObject;

	arrowObject.PrintCrap();
	arrowPointer->PrintCrap();//Use the arrow member selection operator when using a function from the pointers memory address '->'

	system("PAUSE");
	return 0;
}