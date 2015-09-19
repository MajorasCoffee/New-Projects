#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	fstream input;
	string filename = "test.txt";

	input.open(filename, ios::in);

	if (!input.is_open()) {
		return 0;
	}

	while (input) {
		string line;
		getline(input, line, ';');
		input << "\n\n\n";
		
		if (!input) {
			break;
		}
		
	}

	input.close();

	system("PAUSE");
	return 0;
}