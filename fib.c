#include<stdio.h>
void fibo(int a,int b,int n)
void main()
{
	int a=0,b=1;
	printf("\n Enter the term-->");
	scanf("%d",&n);
	int c;
	if(n<=0)
	{
		return;
	}
	c=a+b;
	printf("%d",c);
	a=b;
	b=c;
	fibo(a,b,n-1);
}
