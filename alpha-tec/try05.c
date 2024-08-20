#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x;
    int x2,x4,x6,x8;
    printf("plese give you number: ");
    scanf("%d",&x);
    x2 = x*x;
    x4 = x2*x2;
    x6 = x2*x4;
    x8 = x4*x4;
    printf("x^2 = %d\nx^4 = %d\nx^6 = %d\nx^8 = %d",x2,x4,x6,x8);

    return 0;


}