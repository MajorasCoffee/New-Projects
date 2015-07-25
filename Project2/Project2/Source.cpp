#include <iostream>

using namespace std;

int main() {

	int array[5];

	for (int i = 0; i < (sizeof(array) / sizeof(array[0])); i++) {
		array[i] = i + 1;
	}

	cout << sizeof(array) / sizeof(array[0]) << endl;
	system("PAUSE");
	return 0;
}