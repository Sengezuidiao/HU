#include <iostream>
using namespace std;

template<class Q> Q Max(Q a, Q b, Q c)
{

	return (a > b) ? (a > c ? a :b) : (b > c ? b : c); 
}



int main()
{
	int a = 1, b = 2, c = 3;
	char x = 'A', y = 'B', z ='C';
	cout<< Max(a, b, c) <<endl;
	cout<< Max(x,y,z) <<endl;
	return 0;
}
