#include "stdio.h"
#include "stdlib.h"

int main()
{
    int secend;
    int hours,minute;
    printf("please enter the secend: ");
    scanf("%d",&secend);
    hours = (secend/60)/60;
    minute = (secend-hours*60*60)/60;
    secend = (secend-hours*60*60)%60;
    printf("%.2d:%.2d:%.2d",hours,minute,secend);
}