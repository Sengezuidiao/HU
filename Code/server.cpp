#define _WINSOCK_DEPRECATED_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <WinSock2.h>
//#pragma comment(lib, "ws2_32.lib") gcc 这条没用

int main()
{
	WORD wVersionRequested;
	WSADATA wsaData;
	int iResult = 0;
	int err;
	wVersionRequested = MAKEWORD(2, 2); //winsock 版本2.2
	err = WSAStartup(wVersionRequested, &wsaData);
	if(err!=0)
	{
		printf("Could not find a usable version of Winsock.dll\n");
		return 1;
	}
	else
		printf("The Winsock 2.2 dll was fould\n");
	SOCKET servSock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if(servSock == INVALID_SOCKET)
		printf("socket function failed with error = %d\n", WSAGetLastError());
	SOCKADDR_IN sockAddr;
	memset(&sockAddr,0,sizeof(sockAddr));
	sockAddr.sin_family = PF_INET;
	sockAddr.sin_addr.s_addr = inet_addr("127.0.0.1");
	sockAddr.sin_port = htons(1234);

	iResult = bind(servSock, (SOCKADDR*)&sockAddr, sizeof(SOCKADDR));
	if(iResult == SOCKET_ERROR)
	{
		printf("bind failed with error %u\n", WSAGetLastError());
		return 1;
	}
	listen(servSock, 20);
	//acept client request
	SOCKADDR clntAddr;
	int nSize = sizeof(SOCKADDR);
	SOCKET clntSock = accept(servSock, (SOCKADDR*)&clntAddr, &nSize);
	const char *str = "\nconnect success!\n";
	send(servSock, str, strlen(str)+1, NULL);
	closesocket(clntSock);
	closesocket(servSock);
	WSACleanup();
	return 0;
}
