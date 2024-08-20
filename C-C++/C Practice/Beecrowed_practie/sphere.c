#include "stdio.h"
#include "math.h"
int main()
{
    float pi=3.14159,r;
    float calculatiion;
    scanf("%f",&r);
    calculatiion = (4.0/3)*pi*pow(r,3);
    printf("%.3f",calculatiion);
    return 0;
}