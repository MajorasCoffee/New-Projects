#include <iostream>

using namespace std;

int main() {

	int dylan[20];
	int *point0 = &dylan[0];
	int *point1 = &dylan[1];
	int *point2 = &dylan[2];

	cout << "Pointer0 Memory address = " << point0 << endl;
	cout << "Pointer1 Memory address = " << point1 << endl;
	cout << "Pointer2 Memory address = " << point2 << endl;
	
	point0 += 2;
	cout << "Pointer0 Memory address = " << point0 << endl;

	system("PAUSE");
	return 0;
}