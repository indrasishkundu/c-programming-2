#include<stdio.h>
#include<string.h>
main()
{
	int count=0;
	char arr[20],*i;
	printf("Enter string-->");
	gets(arr);
	i=&arr;
	while(*i!='\0')
	{
		i++;
		count++;
	}
	printf("Length =%d",count);
}
