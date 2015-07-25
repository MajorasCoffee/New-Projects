#include <iostream>
#include <string>
using namespace std;

class Examples
{
public:
	Examples() {
		cout << "Object created" << endl;
	}

	Examples(const Examples& ref)
		:name(ref.name)
	{
		cout << "Copy created" << endl;
	}

	void setName(string name) {
		this->name = name;
	}

	void sayMyName() {
		cout << "My name is " << name << endl;
	}

	~Examples() {
		cout << "Destructor called" << endl;
	}
private:
	string name;

};



int main() {
	Examples* o1 = new Examples;
	o1->setName("Dylan");
	o1->sayMyName();
	delete o1;

	Examples o2;
	o2.setName("Dylan");

	Examples o3(o2);
	o3.sayMyName();

	system("PAUSE");
	return 0;
}