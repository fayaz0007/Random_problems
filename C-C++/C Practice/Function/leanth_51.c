#include <stdio.h>
#include <stdlib.h>
//recive some number as a leanth
//if leanth is 3 than the output will be 999
long leanth2(int num)
{
    int i;
    long calcu = 0;
    for(i=0;i<num;i++)
    {
        printf("9");
    }
    
}
long leanth1(int num)
{
    
    int i;
    long calcu = 0;
    if(num<=9)
    {
        for(i=0;i<num;i++)
        { 
            calcu = calcu*10 + i+1;
        }

    }
     else
    {
        calcu = leanth2(num);
    }
    return calcu;
}
int main()
{
    int a;
    long result;
    printf("plese enter your number: ");
    scanf("%d",&a);
    result = leanth1(a);
    printf("result = %ld\n",result);
    return 0;
}