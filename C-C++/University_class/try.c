#include "stdio.h"
#include "math.h"

int main(){
   float radius,circum,area;
   printf("Enter radius: ");
   scanf("%f",&radius);
   area = (3.1415*pow(radius,2));
   circum = (2*3.1416*radius);
   printf("Circumference = %.2f units\nArea= %.f square units",circum,area);
   
}