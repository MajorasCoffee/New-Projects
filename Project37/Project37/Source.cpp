#include <iostream>
#include <string>
using namespace std;

//exactly the same as a pointer, it isn't passed how much data is in the array
void show1(int size, string fruit[])
{
	for (int i = 0; i < size; i++) {
		cout << fruit[i] << endl;
	}
}

//points to the first address of fruit
void show2(int size, string *fruit) {
	for (int i = 0; i < size; i++) {
		cout << fruit[i] << endl;
	}
}

//you need brackets otherwise it treats it as an array of references
void show3(string (&fruit)[3]) {
	for (int i = 0; i < sizeof(fruit) / sizeof(string); i++) {
		cout << fruit[i] << endl;
	}
}

string* show4() {
	string* fruit = new string[3];
	string names[] = { "Pears", "Grapes", "Potatos" };
	for (int i = 0; i < 3; i++) {
		fruit[i] = names[i];
		cout << fruit[i] << endl;
	}
	return fruit;
}

void deleteMemory(string* p)
{
	delete[] p;
}

int main() {
	string fruit[] = { "Apples", "Oranges", "Bananas" };

	show1(sizeof(fruit) / sizeof(string), fruit);
	cout << endl;

	show2(sizeof(fruit) / sizeof(string), fruit);
	cout << endl;

	show3(fruit);
	cout << endl;

	string* _show4 = show4();
	deleteMemory(_show4);//Must call to deallocated the memory from the heap

	system("PAUSE");
	return 0;
}