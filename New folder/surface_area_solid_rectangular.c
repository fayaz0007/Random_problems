
#include<stdio.h>

int main(){
  float i,w,h,area;
  printf("Plese enter the length: ");
  scanf("%f",&i);
  printf("Plese enter the width: ");
  scanf("%f",&w);
  printf("Plese enter the height: ");
  scanf("%f",&h);

  area = 2*((i*w)+(i*h)+(w*h));
  printf("The area  is %.1f",area);
}