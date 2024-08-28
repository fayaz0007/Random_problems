
#include<stdio.h>

int main(){
  float a,b,h,area;
  printf("Plese enter the base1: ");
  scanf("%f",&a);
  printf("Plese enter the base2: ");
  scanf("%f",&b);
  printf("Plese enter the height: ");
  scanf("%f",&h);

  area = 0.5*(a+b)*h;
  printf("The area of Trapizoid is %.1f",area);
}