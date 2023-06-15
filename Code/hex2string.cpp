#include <iostream>
#include <iterator>
#include <string>
#include <type_traits>

std::string HexToAscii(const std::string& hexString)
{
	std::string asciiString;

	if(hexString.length()%2 != 0)
	{
		std::cerr<<"Invalid hex string length!"<<std::endl;
		return asciiString;
	}
	for(size_t i=0; i<hexString.length(); i+=2)
	{	
		std::string hexByte = hexString.substr(i,2);
		int byteValue = std::stoi(hexByte,nullptr,16);
		char asciiChar = static_cast<char>(byteValue);
		asciiString+=asciiChar;
	}
	return asciiString;
	

}

int main()
{
	std::cout<<"Plese input 16 Bytes string:"<<std::endl;
	std::string hexString;
	std::cin>>hexString;
	std::string asciiString = HexToAscii(hexString);
	std::cout<<"ASCstring:"<<std::endl<<asciiString<<std::endl;
	system("pause");
	return 0;
}
