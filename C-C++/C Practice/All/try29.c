#include  <stdio.h>

int main()
{
    int number,pow,i;
    int totalsum = 1;
    
    printf("plese enter your number: ");
    scanf("%d",&number);
    printf("plese enter your pow: ");
    scanf ("%d",&pow);

    for ( i = 0; i < pow; i++)
    {
        totalsum = totalsum * number;
    }
    printf("%d",totalsum);
    
}