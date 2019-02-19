#include<stdio.h>
#include<conio.h>

void sum (int,int);
int main()
{
	int a,b;
	printf("\n Enter the value of a and b---");
	scanf("%d%d", &a,&b);
	sum(a,b);
	getch();	
	return 0;
}

void sum(int x,int y)
{
	int s;
	s=x+y;
	printf("sum --%d \n", s);
}
