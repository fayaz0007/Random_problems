#include "stdio.h"
#include "stdlib.h"

int main()
{
    int a;
    printf("please enter your number: ");
    scanf("%d",&a);
    if(a>=10 && a <= 99)
        printf("%d is a double digit number",a);
    else if (a>=100 && a<=999)
        printf("%d is a triple digit number",a);
    else
        printf("neither double/triple");
    return 0;
}