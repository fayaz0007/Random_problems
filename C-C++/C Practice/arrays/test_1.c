#include <stdio.h>
int main()
{
    int i;
    int max;
    int number[] = {0,1,8,1,9,2,5,6,6,7,2};
    max = number[0];
    for(i=0;i<11;i++)
    {
        if (number[i]>max)
        {
            
            max = number[i];
        }
        
    } 
    printf("%d",max);
    return 0;
}