#include <iostream>
#include "ClassExamples.h"

using namespace std;

int main() {
	ClassExamples object;
	object.PrintStuff();

	const ClassExamples constObj;//constant objects need constant functions
	constObj.PrintStuff2();

	system("PAUSE");
	return 0;
}