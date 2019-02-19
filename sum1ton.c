#include<stdio.h>
main()
{
	int i,s=0,n;
	printf("enter the range-->");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		s=s+i;
		i=i+1;
	}
	printf("sum=%d",sum);
	getch();
	return 0;
}
