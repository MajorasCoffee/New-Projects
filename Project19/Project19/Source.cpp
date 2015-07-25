#include <iostream>

using namespace std;

//abstract class = class with pure virtual function as members
class Enemy {
public:
	//pure virtual function = any derived class needs to overwrite this function
	//virtual functions = functions that have the option of being overwritten
	virtual void Attack() = 0;
};

class Ninja : public Enemy {
public:
	void Attack() {
		cout << "Ninja chop" << endl;
	}
};

class Zombie : public Enemy {
	void Attack() {
		cout << "Zombie munch" << endl;
	}
};

int main() {
	Ninja n;
	Zombie z;
	Enemy* enemy1 = &n;
	Enemy* enemy2 = &z;
	enemy1->Attack();
	enemy2->Attack();
	system("PAUSE");
	return 0;
}