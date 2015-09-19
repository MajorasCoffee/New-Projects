#include <iostream>

using namespace std;

class excepExample :exception {
public:
	virtual const char* what() const noexcept {
		return "something went wrong";
	}
};

class test {
public:
	void excepTest() {
		throw excepExample();
	}
};


int main() {
	test a;

	try {
		a.excepTest();
	}
	catch (excepExample& a) {
		cout << a.what() << endl;
	}

	system("PAUSE");
	return 0;
}