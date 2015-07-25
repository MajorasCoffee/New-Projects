#include <iostream>
#include <sstream>

using namespace std;

int main() {
	
	string names[5];
	for (int i = 0; i < sizeof(names)/sizeof(string); i++) {
		stringstream ss;
		ss << i+1;
		string num = ss.str();
		names[i] = "name_" + num;
		cout << names[i] << endl;
	}
	
	system("PAUSE");
	return 0;
}