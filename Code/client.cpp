#define _WINSOCK_DEPRECATED_NO_WARNINGS
#include  <stdio.h>
#include <stdlib.h>
#include <WinSock2.h>
#include <string.h>
//#pragma comment (lib, "ws2_32.lib") gcc不能使用

int main()
{
	WSADATA wsaData;
	WORD wVersionRequested;
	int iResult = 0;
	int err;
	wVersionRequested = MAKEWORD(2, 2);
	err = WSAStartup(wVersionRequested, &wsaData);
	if(err!=0)
	{
		printf("Could not find a usable version of Winsock.dll\n");
		return 1;
	}
	SOCKET clntSock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if(clntSock==INVALID_SOCKET)
		printf("socket function failed with error = %d\n", WSAGetLastError());
	SOCKADDR_IN sockAddr;
	memset(&sockAddr, 0, sizeof(SOCKADDR_IN));
	sockAddr.sin_family = PF_INET;
	sockAddr.sin_addr.s_addr = inet_addr("127.0.0.1");
	sockAddr.sin_port = htons(1234);
	
	iResult = connect(clntSock, (SOCKADDR*)&sockAddr, sizeof(SOCKADDR));
	if(iResult==SOCKET_ERROR)
	{
		printf("connect failed with error %u\n", WSAGetLastError());
		return 1;
	}
	char szBuffer[MAXBYTE] = {0};
	recv(clntSock, szBuffer, MAXBYTE, NULL);
	printf("Message from server:%s\n", szBuffer);
	

	closesocket(clntSock);

	WSACleanup();
	system("pause");





	return 0;
}
