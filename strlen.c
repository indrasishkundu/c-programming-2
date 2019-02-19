#include<stdio.h>
#include<string.h>
 main()
{
	int l;
	char c[100];
	printf("\n Enter the string--->");
	gets(c);
	l=strlen(c);
	printf("\n The length of string is--> %d",l);
	return 0;
}
