#include "People.h"
#include "Birthday.h"
#include <iostream>

using namespace std;


People::People(string n, Birthday bo) //member initializer 
	:name(n), dateOfBirth(bo)
{
}

void People::PrintInfo() 
{
	cout << name << " was born on ";
	dateOfBirth.PrintBD();
}