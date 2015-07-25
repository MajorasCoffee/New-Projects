#pragma once

#include "Birthday.h"
#include <string>
using namespace std;

class People
{
public:
	People(string x, Birthday dob);
	void PrintInfo();
private:
	string name;
	Birthday dateOfBirth;
};

