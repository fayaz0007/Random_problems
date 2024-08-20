#include <stdio.h>

int main(){
    int a,b;
    printf("Enter value of first number: ");
    scanf("%d",&a);
    printf("Enter value of secend number: ");
    scanf("%d",&b);
    printf("before swamp: %d %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swamp: %d %d",a,b);

}