#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<double> number;

	cout << "Size: " << number.size() << endl;
	int cap = number.capacity();
	for (int i = 0; i < 10000; i++) {
		if (number.capacity() != cap) {
			cap = number.capacity();
			cout << "Capacity: " << cap << endl;
		}
		number.push_back(i);
	}

	system("PAUSE");
	return 0;
}