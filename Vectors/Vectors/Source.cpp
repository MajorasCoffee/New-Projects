#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

	vector<string> degibbly;

	degibbly.push_back("1. Dylan");
	degibbly.push_back("2. Dylan");
	degibbly.push_back("3. Dylan");

	for (vector<string>::iterator iterate = degibbly.begin(); iterate != degibbly.end(); iterate++) {
		cout << *iterate << endl;
	}

	system("PAUSE");
	return 0;
}