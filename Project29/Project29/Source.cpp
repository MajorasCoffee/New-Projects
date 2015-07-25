#include <iostream>
using namespace std;

int main() {

	char primString[] = "Hello World!";
	int lenght = sizeof(primString) - 1;//20
	cout << "Original: " << primString << endl;

	////////////////////////////////////
	char* pStart = primString;//a[0]
	char* pEnd = (primString + lenght) - 1;//array element a[0 + lenght(20)]-1
	while (pStart < pEnd) {

		char temp = *pStart;
		*pStart = *pEnd;
		*pEnd = temp;

		pStart++;
		pEnd--;
	}
	cout << "Backwards: " << primString << endl;

	////////////////////////////////////
	pStart = (primString + lenght) - 1;//array element a[0 + lenght(20)]-1
	pEnd = primString;//a[0]

	while (pStart > pEnd) {

		char temp = *pStart;
		*pStart = *pEnd;
		*pEnd = temp;

		pStart--;
		pEnd++;
	}
	cout << "Forwards: " << primString << endl;

	////////////////////////////////////
	system("PAUSE");
	return 0;
}