#include<stdio.h>
main()
{
int i,row,j,k;
printf("enter row--");
scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i-1;j++)
		{
			printf(" ");
		}
		for(k=2*(row-i)+1;k>=1;k--)
		{
			printf("*");
		}
		 printf("\n");
    }
       return 0; 
}
