#include<stdio.h>
int main()
{
	int i,j;
		for(j=1;j<=5;j++)
		{
			for(i=1;i<=5;i++)
			{
				if(j<=i)
				printf("*");
				else
				printf(" ");
			}
			printf("\n");
		}
		return 0;
}
