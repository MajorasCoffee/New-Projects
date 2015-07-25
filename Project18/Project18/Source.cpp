#include <iostream>

using namespace std;

class Enemy {
public:
	virtual void Attack() {}
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