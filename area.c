#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c,s;
	printf("enter a=%f,b=%f,c=%f",a,b,c);
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	printf("area of triangle=%f",sqrt(s*(s-a)*(s-b)*(s-c));
	getch();
	return 0;
}
