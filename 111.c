#include<stdio.h>
main()
{
	int i,j,a,b;
	printf("enter the row and col--");
	scanf("%d%d",&a,&b);
    for(i=1;i<=a;i++)
    {
    	for(j=1;j<=b;j++)
    	{
    		printf("%d",i);
		}
		printf("\n ");
	}
	return 0;
}
