#include "stdio.h"
 int main()
{
    int i,arr[10],max;
    for ( i = 0; i < 11; i++)
    {
        scanf("%d",&arr[i]);
        
    }
    max = 0;
    for ( i = 1; i < 11; i++)
    {
        if (arr[i]>arr[max])
        {
            max = i;
        }
        
    }
    printf("%d",max);
}