#include <iostream>
#include "People.h"
#include "Birthday.h"

using namespace std;

int main()
{
	Birthday bo(30,03,94);
	People po("Dylan", bo);
	po.PrintInfo();
	system("PAUSE");
	return 0;
}