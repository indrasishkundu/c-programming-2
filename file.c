#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	
   fp=fopen("IK.txt","w");
   do
   {
   	ch=getchar();
   	putc(ch,fp);
   }while(ch!='\n');
	fclose(fp);
	getch();
	return 0;
	
}
