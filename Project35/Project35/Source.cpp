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

	~Examples() {
		cout << "Destructor called" << endl;
	}

	void setName(string name) {
		this->name = name;
	}

	void sayMyName() {
		cout << "My name is " << name << endl;
	}

private:
	string name;

};

//When dealing with 'new', you are now in charge of the memory because it is allocated on the "heap" and not the stack.

Examples* pExamples() {
	Examples* o2 = new Examples();
	o2->setName("Dylan");
	return o2;
}

int main() {
	Examples* o1 = new Examples();
	o1->setName("Dylan");
	o1->sayMyName();
	delete o1;

	Examples* o2 = pExamples();
	o2->sayMyName();
	delete o2;

	system("PAUSE");
	return 0;
}