#include <iostream>

using namespace std;

int main() {
	int a[] = { 1,2,3 };
	int* b = a;

	//pointer b = memory location of 'a' which is the first variable in the array or [0], then loop through the array 
	for (int i = 0; i < sizeof(a) / sizeof(int); i++) {
		cout << b[i] << flush;
		
	}
	cout << endl;

	//dereference the pointer b so it has a[0], then loop through b
	for (int i = 0; i < sizeof(a) / sizeof(int); i++, b++) {
		cout << *b << flush;
	}
	cout << endl;

	// pointer c = memory location a[0]
	// pointer d = memory location a[2]
	int* c = &a[0];
	int* d = &a[sizeof(a) / sizeof(int) - 1];
	//output the dereferenced value of a[c++] in a loop
	while (true) {
		cout << *c << flush;
		if (c == d) {
			break;
		}
		c++;
	}
	cout << endl;
	system("PAUSE");
	return 0;
}