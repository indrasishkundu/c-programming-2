/*nth fibonacci term */
#include<stdio.h> 
int main() 
{ 
int x=0,y=1,z,n,i; 
printf("\n Please Enter The Term Number:"); 
scanf("%d",&n); 
for(i=3;i<=n;i++) 
{
z=x+y; 
x=y; 
y=z; 
} 
printf("\nthe %dth term of Fibonacci Series is %d\n",n,z); 
return 0; 
}
