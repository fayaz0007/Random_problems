#include "stdio.h"
#include "stdlib.h"

int main()
{
    int a,b;
    

    printf("plese input the 1st number: ");
    scanf("%d",&a);
    printf("plese enter the 2nd number: ");
    scanf("%d",&b);
    if (a == b)
        printf("True\n");
    else
        printf("False\n");
}