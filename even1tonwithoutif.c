/*printing even no bet 1 to n without if*/
#include<stdio.h>
main()
{
	int i=2,n;
	printf("even nos till-->\n");
	scanf("%d",&n);
	printf("all nos from 1 to %d are--> \n",n);
	while(i<=n)
	{
		printf("%d \t",i);
		i=i+2;
	}
	getch();
	return 0;
}
