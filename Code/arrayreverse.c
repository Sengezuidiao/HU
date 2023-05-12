#include <stdio.h>





int main()
{
	int a[100];
	printf("%d", sizeof(a)/sizeof(a[0]));
	return 0;
}

