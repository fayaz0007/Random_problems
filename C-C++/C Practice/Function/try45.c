#include <stdio.h>
//function will return somthing.
//get three number from user as input.
//maximum between the three given number.
int min_maxi_3number()
{
    int num1,num2,num3;
    printf("Enter num1,num2,num3: ");
    scanf("%d%d%d",&num1,&num2,&num3);

    if (num1>num2)
    {
        if(num1>num3)
            return num1;
        else
            return num3;
    }
    else if (num2>num3)
    {
        return num2;
    }
    else return num3;
     
}


int main()
{
    int max;

    max = min_maxi_3number();
    printf("maximum = %d",max);
    return 0;
}