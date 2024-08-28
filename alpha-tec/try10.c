#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a,b,c;
    int minimum,maximum;
    printf("plese enter your 1st number: ");
    scanf("%d",&a);
    printf("plese enter your 2nd number: ");
    scanf("%d",&b);
    printf("plese enter your 3rd number: ");
    scanf("%d",&c);
    maximum = a;
    minimum = b;
    if (a>b)
    {
        minimum = b;
        maximum = a;
    }
    if(maximum<c)
        maximum = c;
    if(minimum>c)
        minimum = c;
    
    printf("maximum: %d\nminimum: %d",maximum,minimum);
    return 0;
    
}