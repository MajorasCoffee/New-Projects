#include "People.h"
#include "Birthday.h"
#include <iostream>
using namespace std;

People::People(string x, Birthday doa)
	:name(x), dateOfBirth(doa)
{
}

void People::PrintInfo()
{
	cout << name << " Was born on "; 
	dateOfBirth.PrintDate();
}
