#include <iostream>
#include "Birthday.h"
#include "People.h"

using namespace std;

int main()
{
	Birthday bo(30, 03, 94);
	People po("Dylan", bo);
	po.PrintInfo();
	system("PAUSE");
	return 0;
}