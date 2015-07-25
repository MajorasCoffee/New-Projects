#include <iostream>
using namespace std;

class Examples {
private:
	static int count;
	int id;
public:
	Examples() { id = ++count; }
	int printId() { return id; }
};

int Examples::count = 0;

int main() {
	Examples o1;
	Examples o2;
	Examples o3;

	cout << o1.printId() << endl;
	cout << o2.printId() << endl;
	cout << o3.printId() << endl;
	system("PAUSE");
	return 0;
}