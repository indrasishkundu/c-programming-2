#include<stdio.h>
main()
{
	int a=0,b=1,c,i,x;
	printf("enter the range-->");
	scanf("%d",&x);
	printf("%d%d",a,b);
	for(i=3;i<=x;i++);
	{
		c=a+b;
		printf("%d",c);
		a=b;
		b=c;
	}
	return 0;
}
