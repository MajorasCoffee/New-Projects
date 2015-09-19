#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
	string output = "test.txt";
	int fill[10][10];

	ifstream file1;

	//file1.open(output);
	//file1 << "*times tables*" << endl;
	//file1 << endl;
	//for (int i = 0; i < 10; i++) {
	//	for (int j = 0; j < 10; j++) {
	//		fill[i][j] = (i + 1) * (j + 1);
	//		file1 << fill[i][j] << " ";
	//	}
	//	file1 << endl;
	//}
	//file1.close();

	file1.open(output);
	

	if (file1.is_open()) {
		string input;
		cout << "gh" << endl;
		while (file1) {
			file1 << "" << endl;
			cout << input << endl;;
		}
	}
	system("PAUSE");
	return 0;
}