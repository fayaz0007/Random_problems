#include "stdio.h"

//write a function that recived 2 number!
//Than simplely printout which one is maximum.
void min_max_number(int num1,int num2)
{
    if (num1>num2)
    {
        printf("maximum number is num1 = %d",num1);
    }
    else
    {
         printf("maximum number is num2 = %d",num2);
    }


}



int main()
{
    int a,b;
    printf("plese enter num1: ");
    scanf("%d",&a);
    printf("plese enter num2: ");
    scanf("%d",&b);
    
    min_max_number(a,b);
    return 0;
}