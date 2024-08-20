#include <stdio.h>
#include <stdlib.h>
//recive a number of integer type
//will return 1 if this given number is even
//otherwise it will return 0
//practice calling function
int iseven(int num)
{
    if (num%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isodd(int num)
{
    if(num%2!=0)
        return 1;
    else
        return 0;
}
int isodd2(int num)
{
    if (iseven(num)==1)
        return 0;
    else
        return 1;
}

int main()
{
    int a;
    printf("plese enter a number: ");
    scanf("%d",&a);
    if(isodd2(a)==1)
        printf("this number (%d) is odd ",a);
    else
        printf("this number (%d) is even ",a);
    return 0;
}
