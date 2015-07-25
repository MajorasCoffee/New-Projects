#include <iostream>
#include "OperatorOverloading.h"

using namespace std;

int main() {
	OperatorOverloading o1(10);
	OperatorOverloading o2(5);
	OperatorOverloading o3;
	o3 = o1 + o2;
	cout << o3.num << endl;

	system("PAUSE");
	return 0;
}