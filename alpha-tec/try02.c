#include <stdio.h>

int main()
{
    int units,hundred,tens,num;
    printf("plese enter 3 digit number: ");
    scanf("%d",&num);
    units = num%10;
    tens = (num/10)%10;
    hundred = num/100;

    printf("%d %d %d",units,tens,hundred);
    return 0;
    
}