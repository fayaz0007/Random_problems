#include <stdio.h>

int main()
{
    float data;
    float reverce;
    printf("plese enter your data: ");
    scanf("%f",&data);
    reverce = data-(int)data;
    printf("%.1f",reverce);
}