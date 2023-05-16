#include <stdio.h>

int main()
{
	int matrix[3][3];
	printf("please input a 3 x 3 matrix\n");
	for(int i=0; i<3; i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d", &matrix[i][j]);
		}
	}
	int sum = 0;
	for(int i=0; i<3; i++)
	{
		for(int j=0;j<3;j++)
		{
			if(i==j)
			{
				sum += matrix[i][j];
			}
		}
	}
	printf("the sum of 3 x 3 matri = %d\n", sum);
	return 0;
}
