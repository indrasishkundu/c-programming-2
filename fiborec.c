/*fibonacci recursion*/
#include<stdio.h>
main()
{
	int a=0,b=1,n;
	void fibo(int a,int b,int n)
	{
		int c ;
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
}
