#include <stdio.h>
int divisor(int num)
{
    int i;
    int sum = 1;
    if (num == 1)
        return num;
    for (i = 1; i < num == 0;i++)
    {
        if (num % i == 0)
            sum = sum +i;
    }
    return sum;
}
int perfect_number(int num)
{
    if(num<=1)
        return 0;
    if  (num == divisor(num))
    {
        return 1;
    }
    
}
int main()
{
    int a;
    int result ;
    scanf("%d",&a);
    
    printf("%d",divisor(a));
    result = perfect_number(a);
    if (result == 1)
        printf("its a perfect number");
    else
        printf("its not a perfect number");
    return 0;
}