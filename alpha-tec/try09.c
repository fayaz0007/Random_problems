#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b;
    printf("plese enter your 1st number: ");
    scanf("%f",&a);
    printf("plese enter your secend number: ");
    scanf("%f",&b);
    if (a>b)
        printf("maximum: %.2f\nminimum: %.2f",a,b);
    else
        printf("maximum: %.2f\nminimum: %.2f",b,a);
    return 0;
}