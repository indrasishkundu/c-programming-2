/*reverse*/
#include<stdio.h>
main()
{
	int x,r;
	printf("enter -->");
	scanf("%d",&x);
	while(x>0)
	{
		r=x%10;
		printf("%d",r);
		x=x/10;
	}
	return 0;
}
