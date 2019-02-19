/*factorial*/
#include<stdio.h>
main()
{
 unsigned long int fact=1,n;
	printf("enter a no to calculate --> \n");
	scanf("%u",&n);
	while(n>0)
	{
		fact=fact*n;
		n=n-1;
	}
	printf("fact =%u",fact);
	return 0;
}
