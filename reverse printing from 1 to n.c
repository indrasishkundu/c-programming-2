/*reverse printing from 1 to n*/
#include<stdio.h>
main()
{
    int i, start;
    printf("Enter starting value: ");
    scanf("%d",&start); 
    for(i=start;i>=1;i=i-1)
    {
        printf("%d\n", i);
    
    }

    return 0;
}
