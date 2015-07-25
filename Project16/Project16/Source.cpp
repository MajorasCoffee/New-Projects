#include <iostream>

using namespace std;

class Enemies {
protected:
	int attackPw;
public:
	void SetAttack(int x) {
		attackPw = x;
	}
};

class Zombie: public Enemies {
public:
	void attack(){
		cout << "Zombie's attack with a power of - " << attackPw << endl;
	}
};

class Werewolf: public Enemies {
public:
	void attack() {
		cout << "Zombie's attack with a power of - " << attackPw << endl;
	}
};

int main() {
	Zombie z;
	Werewolf w;
	Enemies* ep1 = &z;
	Enemies* ep2 = &w;
	ep1->SetAttack(10);
	ep2->SetAttack(30);
	z.attack();
	w.attack();
	system("PAUSE");
	return 0;
}