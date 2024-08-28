#include <stdio.h>
//receives a number
//calculates its factorial
//returns the result
int factorial_number()
{
    int num;
    int calculation=1;
    int i=1; 
    printf("plese enter the number: ");
    scanf("%d",&num);
    if(num<0)
    {
        return -1;
    }
    else
    {
        while(i<=num)
        {
            calculation =calculation*i;
            i++;
        }
    }

    printf("factorial number: %d",calculation);
    
}
int main()
{
    factorial_number();
    return 0;
}