#include <stdio.h>

int main()
{
    int secend;
    printf("plese enter your secend: ");
    scanf("%d",&secend);
    int hours = secend/3600;
    int minute = (secend-hours*3600)/60;
    int secends = (secend-hours*3600)%60;
    printf("%d:%d:%d",hours,minute,secends);
}