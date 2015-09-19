#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Data {
	char name[200];
	int age;
};

int main() {
	fstream file;
	Data _dataOut = {"Dylan", 21};
	file.open("data.bin", ios::out);
	if (!file.is_open()) {
		return 1;
	}
	file.write((char*)&_dataOut, sizeof(_dataOut));
	if (!file) {
		return 1;
	}
	file.close();

	Data _dataIn;
	file.open("data.bin", ios::in);
	if (!file.is_open()) {
		return 1;
	}
	file.read((char*)&_dataIn, sizeof(_dataOut));
	if (!file) {
		return 1;
	}

	cout << _dataIn.name << ": " << _dataIn.age << endl;

	file.close();
	system("PAUSE");
	return 0;
}