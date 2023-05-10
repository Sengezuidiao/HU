#include  <stdio.h>

#if 1
int y(int x)
{
	if(x<5)
		return x;
	else if(x>=5 && x<15)
		return x+6;
	else
		return x-6;
	
}
#else

int y(int x)
{
		return (x<5) ? x : (x<15) ? (x + 6) : (x - 6); 
}


#endif


int main()
{
	int x;
	printf("input x\n");
	scanf("%d", &x);
	printf("y = %d",y(x));

	return 0;
}






