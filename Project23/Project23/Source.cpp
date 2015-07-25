#include <iostream>
using namespace std;

int main() {
	try {
		int x;
		cout << "Enter first number: ";
		cin >> x;

		int y;
		cout << "Enter second number: ";
		cin >> y;

		if (y == 0) {
			cout << x << " / " << 0 << endl;
			throw 666;
		}
		cout << x / y << endl;
	}
	catch (int x)
	{
		cout << "ERROR CODE: " << x << endl;
	}
	system("PAUSE");
	return 0;
}