#include <iostream>
using namespace std;

int main() {
	cout << "There is " << sizeof(int) * 8 << " bits or " << sizeof(int) << " bytes in an int" << endl;
	cout << "There is " << sizeof(char) * 8 << " bits or " << sizeof(char) << " bytes in a char" << endl;
	cout << "There is " << sizeof(string) * 8 << " bits or " << sizeof(string) << " bytes in a string" << endl;
	cout << "There is " << sizeof(double) * 8 << " bits or " << sizeof(double) << " bytes in a double" << endl;
	cout << "There is " << sizeof(float) * 8 << " bits or " << sizeof(float) << " bytes in a float" << endl;
	system("PAUSE");
	return 0;
}