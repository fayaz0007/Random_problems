#include <stdio.h>
int main()
{
    float a,b,c,aveg;
    scanf("%f%f%f",&a,&b,&c);
    aveg = (a*2+b*3+c*5)/(2+3+5);
    printf("MEDiA = %.1f\n",aveg);
    return 0;
}
