#pragma once
class OperatorOverloading
{
public:
	int num;
	OperatorOverloading();
	OperatorOverloading(int);
	OperatorOverloading operator+(OperatorOverloading);
	
};

//comparing the value of two objects