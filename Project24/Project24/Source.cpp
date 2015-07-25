#include <iostream>
using namespace std;

class TimeTables {
public:
	TimeTables() {
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				mTables[i][j] = ((j + 1)*(i + 1));
			}
		}
	}

	void PrintTT() {
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				cout << mTables[i][j] << " ";
			}
			cout << endl;
		}
	}

protected:
	int mTables[10][10];
};



int main() {
	TimeTables tables;
	tables.PrintTT();
	system("PAUSE");
	return 0;
}