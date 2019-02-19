/*print 1 2 4 7 11 17*/  
#include<stdio.h>
main()
{
int a=1,b,i=0,n;
printf("Enter Range:");
scanf("%d",&n);
while(i<=n)
{
a=a+i;
printf("%d \n",a);
i++;
}
return 0;   
}
