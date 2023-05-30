#include "overload.h"
class People
{

public:
	People(int age,const char* name,const char* gender);
private:
	int mage;
	const char* mname;
	const char* mgender;

};

class Student:public People
{
public:
	//Student(int age,const char* name,const char* gender);
	Student();

};


int main()
{
	Student stu(18,"Lily","male");	
	return 0;
}
