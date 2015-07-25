#include <iostream>

using namespace std;

void funcToDaTion(int &refValue) {
	refValue += 5;
}


int main() {
	int value = 10;
	int& refValue = value;
	refValue += 20;
	value += refValue;
	cout << value << endl;

	int apples = 10;
	funcToDaTion(apples);
	cout << apples << endl;

	int *pointToDaEr = &apples;
	*pointToDaEr += 50;
	apples += 5;
	cout << apples << endl;

	system("PAUSE");
	return 0;
}