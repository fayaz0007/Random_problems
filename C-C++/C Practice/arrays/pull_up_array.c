#include <stdio.h>
int main()
{
    int i;
    int pullups[10];
    for(i=0;i<10;i++)
    {
        printf("enter number of pullups on day:",i+1);
        scanf("%d",&pullups[i]);
    }
    for ( i = 9; i>=0; i--)
    {
        printf("%d days ago you did %d pullups\n",10-i-1,pullups[i]);
    }
    return 0;
}