#include<stdio.h>
#include<string.h>
main()
{
	int x;
	char str1[50],str2[50];
	printf("\n Enter the string 1-->");
	gets(str1);
	printf("\n Enter the string 2-->");
	gets(str2);
	x=strcmp(str1,str2);
	printf("%d",x);
	return 0;
}
