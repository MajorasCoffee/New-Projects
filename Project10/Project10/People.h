#pragma once

#include <string>
#include "Birthday.h"
using namespace std;

class People
{
public:
	People(string n, Birthday bo);
	void PrintInfo();
private:
	string name;
	Birthday dateOfBirth;
};

