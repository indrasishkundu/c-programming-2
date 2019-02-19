#include<stdio.h>
main()
{
 int x,y,z,num;
 printf("Enter the limit of fibonacci number : ");
 scanf("%d",&num);
 x=0;
 y=1;
 while(num>=x)
 {
   printf(" %d",x);
   z=x+y;
   x=y;
   y=z;
 }
 getch();
 return 0;
}
