#include<stdio.h>
void fibo(int a, int b, int n);
main()
{
	int a=0,b=1,n;
	printf("%d%d",a,b);
	fibo(a,b,n-2)
	int c;
	if(n<=0)
	{
		return;
	}
	c=a+b;
	printf("%d",c);
	a=b;
	b=c;
	fibo(a,b,n-1)
}
