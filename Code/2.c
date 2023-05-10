#include  <stdio.h>
int main()
{
	char a;
	printf("input a-z\n");
	scanf("%c", &a);
	if(a>='a' && a<='z')
		a-=32;
	else
		printf("input error!\n");
	printf("output:%c\n", a);
	return 0;
}
