#include<stdio.h>
#include<string.h>
main()
{
	char str1[50],str2[50];
	printf("\n Enter the string 1-->");
	gets(str1);
	printf("\n Enter the string 2-->");
	gets(str2);
	strcpy(str1,str2);
	printf("\n%s",str1);
	return 0;
}
