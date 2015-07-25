#include <iostream>
#include <string>
using namespace std;

class Operator {
private:
	string key;
public:
	Operator(string key) :key(key) { cout << "Super class constructor called" << endl; }
	void printKey() { cout << "The key is - " << key << endl; }
};

class Car :public Operator {
public:
	Car(string key) :Operator(key) { cout << "Car class constructor called" << endl; }
}; 

int main() {
	Car key("The Key");
	key.printKey();
	system("PAUSE");
	return 0;
}