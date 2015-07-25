#include <iostream>
#include "Friends.h"
using namespace std;

int main()
{
	Friends fo;
	fo.PrintFriends();
	FriendExample(fo);
	fo.PrintFriends();
	system("PAUSE");
	return 0;
}

void FriendExample(Friends &fo)
{
	fo.friendship = "Ohhhh FriendExample is my friend";
}


/*
#include <iostream>
using namespace std;

class Friends{
public:
	Friends(){
		friendship = "I've no mates";
	}

	void PrintFriends(){
		cout << friendship << endl;
	};
private:
	string friendship;
	friend void FriendExample(Friends &fo)
};

void FriendExample(Friends &fo)
{
	fo.friendship = "Ohhhh FriendExample is my friend";
}

int main()
{
	Friends fo;
	fo.PrintFriends();
	FriendExample(fo);
	fo.PrintFriends();
	system("PAUSE");
	return 0;
}
*/