#include <iostream>
#include <string>
using namespace std;
void ExceptionsExamples();
void TryHard();

int main() {
	try {
		TryHard();
	}
	catch (int a) {
		cout << "Error code: " << a << endl;
	}

	catch (char const* a) {
		cout << "Error code: " << a << endl;
	}

	catch (string& a) {
		cout << "Error code: " << a << endl;
	}

	system("PAUSE");
	return 0;
}

void ExceptionsExamples()
{
	bool error = false;

	if (error) {
		throw 5;
	}

	if (error) {
		throw "Failed on second statement";
	}

	if (!error) {
		throw string("Failed on third statement");
	}
}

void TryHard() {
	ExceptionsExamples();
}