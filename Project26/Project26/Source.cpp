#include <iostream>
using namespace std;

int main() {
	char a[] = "Hello World";
	for (int i = 0; i < 6; i++) {
		char temp = a[i];
		a[i] = a[10 - i];
		a[10 - i] = temp;
	}
	cout << a << endl;
	system("PAUSE");
	return 0;
}