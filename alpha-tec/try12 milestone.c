#include "stdio.h"
#include "math.h"
#include "stdlib.h"

int main()
{
    char symbles;
    int a,b;
    printf("plese chouse your term('+','-','*','/','%'): ");
    scanf("%c",&symbles);
    printf("plese enter your 1st number: ");
    scanf("%d",&a);
    printf("plese enter your 2nd number: ");
    scanf("%d",&b);
   
    switch(symbles)
    {
        case'+':
            printf("your result is: %d\n",a+b);
            break;
        case'-':
            printf("your result is: %d\n",a-b);
            break;
        case'/':
            if(b==0)
                printf("you cant devide by zero");
            else
                printf("your result is: %d\n",a/b);
                break;
        case'*':
            printf("your result is: %d\n",a*b);
            break;
        case'%':
            if(b==0)
                printf("you cant devide by zero");
            else
                printf("your result is: %d\n",a%b);
                break;
        default:
            printf("error....something is wrong\n");
            break;
    }
}