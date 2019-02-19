/*physically reverse*/
#include<stdio.h>
main()
{
	int x,r,rev=0;
	printf("enter -->");
	scanf("%d",&x);
	while(x>0)
	{
		r=x%10;
		rev=rev*10+r;
		printf("%d",r);
		x=x/10;
	}
	return 0;
}
