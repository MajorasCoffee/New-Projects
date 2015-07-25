#include <iostream>
#include <string>
using namespace std;

class Examples
{
private:
	string name;
public:
	Examples() {
		cout << "Object created" << endl;
	}

	Examples(const Examples& ref)//Defining a Copy constructor 
		:name(ref.name) {
		cout << "Copy created" << endl;
	}

	void setter(string name) {
		this->name = name;
	}

	void speak() const {
		cout << "My name is " << name << endl;
	}
};

int main() {
	Examples o1;
	o1.setter("Dylan");
	o1.speak();

	Examples o2(o1);
	o2.speak();

	system("PAUSE");
	return 0;
}