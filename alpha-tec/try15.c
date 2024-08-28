#include "stdio.h"
#include "stdlib.h"
#include "math.h"
int main()
{
    int a;
    printf("please enter your number: ");
    scanf("%d",&a);
    if (a<0)
       printf("%d",-a);
    else
        printf("%d",a);
}