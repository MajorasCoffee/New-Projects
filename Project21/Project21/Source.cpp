#include <iostream>
using namespace std;

template<class First, class Second>
First smaller(First a, Second b) {
	return(a < b ? a : b);
}

int main() {

	int x = 6;
	float y = 5.7;
	cout << smaller(x, y) << endl;
	system("PAUSE");
	return 0;
}