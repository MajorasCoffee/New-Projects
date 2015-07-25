#include <iostream>
#include "Bob.h"
#include "Bill.h"

using namespace std;

void Bill::test() {
	a = 1; // a is derived from Bob because it is public
	//b = 2; // b is not derived because it is private and therefore not accessible to Bill
	c = 3; // c is derived because it is protected
}