#include <stdio.h>
//area calculation of a triangle.

float area_calculation(float hight,float width)
{
    int calculation;

    calculation = hight * width;
    return calculation;
}

int main()
{
    float a,b;
    int cal;
    printf("plese enter the hight: ");
    scanf("%f",&a);
    printf("plese enter the  width: ");
    scanf("%f",&b);
    cal = area_calculation(a,b);
    printf("the area is : %d",cal);
    return 0;
}