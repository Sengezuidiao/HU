#include <iostream>
using namespace std;

class Cylinder
{

public:
	
	Cylinder(float r=0, float h=0);
	float getVolume();
	float getArea();

private:
	float mr;
	float mh;
};

Cylinder::Cylinder(float r, float h)
{
	mr = r;
	mh = h;
}
float Cylinder::getArea()
{
	return 3.14159 * mr * mr;
}
float Cylinder::getVolume()
{
	return this->getArea()*mh;
}
int main()
{
	float r, h;
	cout<<"Input the raius and height, such as 10[space]10[return] or 10[tab]10[return] or 10[return]10[return]\n";
	cin>>r>>h;
	Cylinder cylinder(r, h);
	cout<<"the cylinder bottom area is "<<cylinder.getArea()<<endl;
	cout<<"the cylinder volume is "<<cylinder.getVolume()<<endl;
	

	return 0;
}
