#include <iostream>
#include "ClassExamples.h"

using namespace std;

ClassExamples::ClassExamples()
{
}


ClassExamples::~ClassExamples()
{
}

void ClassExamples::PrintStuff() 
{
	cout << "hello world" << endl;
}

void ClassExamples::PrintStuff2() const
{
	cout << "constant hello world" << endl;
}