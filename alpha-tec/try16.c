#include "stdio.h"
#include "stdlib.h"

int main()
{
    int x,y;
    printf("please enter the value of x: ");
    scanf("%d",&x);
    printf("please enter the value of y: ");
    scanf("%d",&y);
    if (x>0 && y>0)
        printf("quadrant 1");
    else if (x<0 && y<0)
        printf("quadrant 3");
    else if (x>0 && y<0)
        printf("quadrant 4");
    else
        printf("quadrant 2");
    return 0;
    
    
}