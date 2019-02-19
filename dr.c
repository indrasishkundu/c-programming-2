#include<stdio.h>
main()
{
	int i,n,m;
	printf("enter a starting range--");
	scanf("%d",&m);
	printf("enter ending range--");
	scanf("%d",&n);
	i=m;
	while(i<=n)
	{
		printf("%d \n",i);
		i=i+1;
	}
	getch();
	return 0;
}
