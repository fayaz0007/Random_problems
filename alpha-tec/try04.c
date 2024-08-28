
#include <stdio.h>
#include <math.h>
int main()
{
    float x1,x2,y1,y2;
    float calculation;

    printf("plese write your x1 value: ");
    scanf("%f",&x1);
    printf("plese write your x2 value: ");
    scanf("%f",&y1);
    printf("plese write you y1 value: ");
    scanf("%f",&x2);
    printf("plese write your y2 value: ");
    scanf("%f",&y2);
    calculation = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    printf("your distance between two point is : %.2f",calculation);
}