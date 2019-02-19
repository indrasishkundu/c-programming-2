#include<stdio.h>
#include<conio.h>

void sum ();
int main()
{
	sum();
	getch();
	return 0;
}

void sum()
{
	int a,b,s;
	printf("\n Enter the value of a and b--->");
	scanf("%d%d", &a,&b);
	s=a+b;
	printf("sum --%d \n", s);
}
