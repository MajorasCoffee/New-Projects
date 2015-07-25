#include <iostream>
#include <string>
using namespace std;

class Examples
{
private:
	string name;
public:
	void setter(string name) {
		this->name = name;
	}
	void speak() const {
		cout << "My name is " << name << endl;
	}
};

int main() {

	Examples ob1;
	ob1.setter("Dylan");
	ob1.speak();

	Examples ob2;
	Examples* pO = &ob1;
	pO->setter("Bob");
	pO->speak();
	system("PAUSE");
	return 0;
}