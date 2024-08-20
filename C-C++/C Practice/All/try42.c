#include  <stdio.h>
#include  <stdlib.h>


int main()
{
    int num,count = 0,i;

    printf("plese enter te range of the nmber: ");
    scanf("%d",&num);

    for (i=1;i<=num;i++)
    {
        if (i%3==0 && i%5==0)
        {
            printf("%d can be devided by 3 and 5\n",i);
            count= count+i;
        }
        else{
            continue;
        }
          
    }
    
    printf("%d",count);
}