#include <iostream>
using namespace std;

//template definition needs to proceed every new function that needs it
template <class N>
class Example {
	N first, second;
public:
	Example(N a, N b) {
		first = a;
		second = b;
	}
	N greaterT();
};

template <class N>
//You need to specify what template parameter of the class you're going to be using <N>
N Example<N>::greaterT() {
	return (first > second ? first : second);
}

int main() {
	//You need to specify what type of data you're going to be passing when creating an object that uses a template
	Example <int> eO(5,6);
	cout << eO.greaterT() << endl;
	system("PAUSE");
	return 0;
}







