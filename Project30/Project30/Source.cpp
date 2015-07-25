#include <iostream>
#include <string>
using namespace std;

void Reverse(int, string, char[]);

int main() {
	char phrase[] = "Dylan Convery";
	cout << "Original: " << phrase << endl;
	int lenght = sizeof(phrase) - 1;
	Reverse(lenght, "Reverse: ", phrase);
	Reverse(lenght, "Forwards ", phrase);
	system("PAUSE");
	return 0;
}

void Reverse(int pL, string dir, char prmStrg[]){
	for (int i = 0; i < pL; i++, pL--) {
		char temp = prmStrg[i];
		prmStrg[i] = prmStrg[pL - 1];
		prmStrg[pL - 1] = temp;
	}
	cout << dir << prmStrg << endl;
}