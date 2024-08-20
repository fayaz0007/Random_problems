#include "stdio.h"


int main()
{
    int year;

    printf("plese a year: ");
    scanf("%d",&year);

    if (year % 4==0)
        if (year % 100 == 0)
            printf("its a not leap year");
        else
            printf("its a leap year");
        
        
    else if (year%400==0)
        printf("its a leap year");
}