#include <stdio.h>
#include <math.h>
int main(){
    float r,h,pi = 3.14159,area;
    printf("Plese enter the value of radius: ");
    scanf("%f",&r);
    printf("Plese enter the value of height: ");
    scanf("%f",&h);
    area = (2*r*pi*h)+(2*pi*pow(r,2));

    printf("The area is: %.3f",area);
}