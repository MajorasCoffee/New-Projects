#include <iostream>
#include "ClassExamples.h"

using namespace std;


ClassExamples::ClassExamples(int a, int b):num(a),constNum(b)//member initializer
{
}


void ClassExamples::PrintStuff()
{
	cout << "num: " << num << " constNum: " << constNum << endl;
}
