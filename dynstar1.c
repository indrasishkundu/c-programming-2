#include<stdio.h>
main()
{
	int i,j,a,b;
	printf("enetr row and col-- ");
	scanf("%d%d",&a,&b);
    for(i=1;i<=a;i++)
    {
    	for(j=1;j>=i;j++)
    	{
    		printf("*");
		}
		printf("\n");
	}
	return 0;
}
