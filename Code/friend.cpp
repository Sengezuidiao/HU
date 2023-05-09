#include <iostream>
using namespace std;

class Building;
class MyFriend;





//友元成员函数
class Building
{
	friend void MyFriend::LookAtBedRoom(Building& building);

};

class MyFriend
{
public:
	void LookAtBedRoom(Building& building);	
	void PlayInBedRoom(Building& building);


};




int main()
{


	return 0;
}

