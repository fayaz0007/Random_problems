#include <stdio.h>

int main()
{
    int num,i,total = 0;
    printf("plese enter your number: ");
    scanf("%d",&num);

    for (i=1;i<=num;i++)
    {
        total = total + i;
        printf("%d+",i);
        
    }
    printf("=");
        
    printf("%d",total);
}