#include<stdio.h>
main()
{
	int i,j,a,b;
	printf("enter row and col-- ");
	scanf("%d%d",&a,&b);
    for(i=3;i<=a;i++)
    {
    	for(j=1;j<=i;j++)
    	{
    		printf("*");
		}
		printf("\n");
	}
	return 0;
}
