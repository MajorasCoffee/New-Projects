#include <iostream>

using namespace std;

// exception catching order

void catching() {
	bool excep1 = true;
	bool excep2 = true;

	if (excep1) {
		throw bad_alloc();
	}

	if (excep2) {
		throw exception();
	}
}

int main() {

	try {
		catching();
	} 
	// subclasses should be caught before subclasses, so pasting this above its parent class
	catch (bad_alloc& b) {
		cerr << "Error: " << b.what() << endl;
	}
	// bad alloc is caught by exception because it is the base class of bad_alloc
	catch (exception& a) {
		cerr << "Error: " << a.what() << endl; 
	}

	system("PAUSE");
	return 0;
}