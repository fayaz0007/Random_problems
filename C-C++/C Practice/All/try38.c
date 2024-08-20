#include "stdio.h"

int main()
{
    int num,i,count=0;


    printf("plese enter the range: ");
    scanf("%d",&i);

    for (num = 2;num>0;num++)
    {
        if (num%2==0)
        {
            printf("%d,",num);
            count++;

        }
        else if (count == i)
        {
            break;
        }
        
        
        else
        {
            continue;
        }   
        
          
    }


}