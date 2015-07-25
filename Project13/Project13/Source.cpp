#include <iostream>
#include "Examples.h"

using namespace std;
//Operator overloading
int main() {
	Examples a(20);
	Examples b(40);
	Examples c;

	c = a + b;
	cout << c.num << endl;

	system("PAUSE");
	return 0;
}