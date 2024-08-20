#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num;

    printf("plese enter your given number: ");
    scanf("%d",&num);
    if (num%2==0)
        printf("your provided %d num is even",num);
    else
        printf("your provided  %d number is odd",num);
    return 0;
}