#include  <stdio.h>
#include <math.h>
int main()
{
	int digit = 0;
	int tens = 0;
	int hundreds = 0;
	
	for(int i = 100; i<= 999; i++ )
	{
	    digit = i%100%10;
	    tens = i%100/10;
	    hundreds = i/100;
	  	if(i == pow(digit,3) + pow(tens, 3) + pow(hundreds,3))
			printf("%d \n",i);

	}
	return 0;
}
