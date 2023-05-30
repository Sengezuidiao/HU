#include <iostream>
#include "overload.h"
using namespace std;
int main()
{
	complex c1(4.3, 5.8);
	complex c2(2.4, 3.7);
	complex c3;
	c3 = c1 + c2;
	c3.display();
	return 0;
}
