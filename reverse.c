#include<stdio.h>
#include<conio.h>

int main()
{
	int n,r=0;
	printf("Enter a no to reverse--> \n");
	scanf("%d", &n);
	while(n!=0)
	{
		r=r*10;
		r=r+n%10;
		n=n/10;
	}
	printf("Reverse order of entered no is--> %d \n" ,r);
	
return 0;
}
