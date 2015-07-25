#include <iostream>
#include < string>

using namespace std;

class Examples {
public:
	Examples() {
		cout << "Constructor called" << endl;
	}
	~Examples() {
		cout << "Destructor called" << endl;
	}

	void setName(string letter) {
		this->letter = letter;
	}

	void printLetter() {
		cout << letter << endl;
	}

private:
	string letter;
};

int main() {
	Examples* oE = new Examples[26];
	char a = 'a';

	for (int i = 0; i < 26; i++, a++) {
		string letter(1, a);
		oE[i].setName(letter);
		cout << "oE[" << i << ']' << '=' << flush;
		oE[i].printLetter();
	}
	delete[] oE;



	system("PAUSE");
}