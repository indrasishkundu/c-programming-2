#include<stdio.h>
 main()
 {
 	int a=0,b=1,c,n,i;
 	printf("enter the number");
 	scanf("%d",n);
 	for(i=3;i<=n;i++)
 	{
 		c=a+b;
 		a=b;
 		b=c;
 		printf("%d",b);
	 }
	 return 0;
 }
