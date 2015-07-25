#pragma once
#include <string>
using namespace std;

class Friends
{
public:
	Friends();
	void PrintFriends();
private:
	string friendship;
	friend void FriendExample(Friends &fo);
};