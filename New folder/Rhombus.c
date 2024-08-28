#include<stdio.h>

int main(){
  float b,h,area;
  printf("Plese enter the diagonal 1: ");
  scanf("%f",&b);
  printf("Plese enter the diagonal 2: ");
  scanf("%f",&h);

  area = 0.5*b*h;
  printf("The area of  is Rhombus %.2f",area);
}
