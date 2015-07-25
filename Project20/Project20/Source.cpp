#include <iostream>
using namespace std;

template <class Calc>

Calc addCrap(Calc a, Calc b) {
	return a + b;
}

int main() {
	int x, y, ans;
	cin >> x;
	cin >> y;
	ans = addCrap(x, y);
	cout << ans << endl;
	system("PAUSE");
	return 0;
}