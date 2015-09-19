#include <iostream>

using namespace std;

//throw and catch exception from class constructor

class ExceptionExamples {
public:
	ExceptionExamples() {
		char* point = new char[9];//Visual studios checks to see if an array is too big
		delete[] point;
	}
};


int main() {
	try {
		ExceptionExamples excep;
	}
	catch (bad_alloc &bad) {
		cout << "Error: " << bad.what() << endl;
	}
	cout << "f" << endl;

	
	return 0;
}