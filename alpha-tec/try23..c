#include <stdio.h>

int main()
{
    int number,pow,count=1;

    printf("plese enter your number: ");
    scanf("%d",&number);
    printf("plese enter your power: ");
    scanf("%d",&pow);
    
    while (pow>0)
    {
        count=count*number;
        pow--;
        
    }
    printf("%d",count);
    
     return 0;

}