#include <stdio.h>
int main()
{
    int code,unit;
    float price,actual_amount = 0,i;
    for ( i = 1; i <= 2; i++)
    {
        scanf("%d%d%f",&code,&unit,&price);
        actual_amount = actual_amount+price*unit;
    }
    printf("VALOR A PAGAR: R$ %.2f\n",actual_amount);
    return 0;
     
}