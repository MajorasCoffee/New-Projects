#include <iostream>
#include <string>
using namespace std;

class animal {
public:
	void emotions(string emotion) {
		cout << emotion << endl;
	}
};

class cat: public animal{};

int main() {
	cat cat;
	cat.emotions("Grrrr");
	system("PAUSE");
	return 0;
}