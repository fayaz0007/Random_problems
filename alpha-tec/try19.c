#include "stdlib.h"
#include "stdio.h"
#include "math.h"
int main()
{
    int a,b,c;
    printf("please enter the 1st number: ");
    scanf("%d%d%d",&a,&b,&c);
   
    if ((a%b==0 || b%a==0)&&(b%c==0 || c%b==0)&&(a%c==0 || c%a==0))
        printf("deviteble");
    else
        printf("non  devideble");
    return 0;
        
    
}