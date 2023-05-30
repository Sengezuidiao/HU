#include <iostream>
#include <string>

using namespace std;

int main()
{
	
	string str = "asdfg";
	char ch1 = str[100];
	cout<< ch1<<endl;
	char ch2 = str.at(100);
	cout << ch2<<endl;
	return 0;
}
