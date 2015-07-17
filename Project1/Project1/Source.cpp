#include <iostream>
#include <string>

using namespace std;
void PassByValue(int x);
void PassByReference(int *x);

int main() {
	int oranges = 10;
	int apples = 5;

	PassByValue(oranges);
	PassByReference(&apples);

	cout << "You now have " << oranges << " oranges." << endl;
	cout << "You now have " << apples << " apples." << endl;

	system("PAUSE");
	return 0;
}

void PassByValue(int x) {
	x += 20;
}

void PassByReference(int *x) {
	*x += 20;
}