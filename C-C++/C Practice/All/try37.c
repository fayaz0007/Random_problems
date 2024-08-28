#include "stdio.h"

int main()
{
    int num;
    for (num=2;num<=10;num++)
    {
        if (num%2==0)
        {
            printf("%d,",num);
        }
        else
            continue;
    }
}