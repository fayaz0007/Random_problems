// #include <stdio.h>
// int main(){
//     float num,num1;
//     scanf("%f%f",&num,&num1);
//     printf("%.2f\n%.3f",num,num1);
// }


// #include <stdio.h>
// int main(){
//     int a,b,sum;
//     printf("Plese enter your value: ");
//     scanf("%d",&a);
//     printf("Plese enter your 2nd value: ");
//     scanf("%d",&b);

//     sum = a+b;
//     printf("Sum of the value is: %d",sum);

    
// }

#include <stdio.h>
#include <math.h>

int main(){
    float base,hight,hypo,calcu,area;

    printf("Enter base: ");
    scanf("%f",&base);
    printf("Enter hight: ");
    scanf("%f",&hight);

    hypo = pow(base,2)+pow(hight,2);
    calcu = sqrt(hypo);
    area = ((1.0/2.0)*base*hight);
    printf("Hypotenuse: %.2f",calcu);
    printf("\nArea: %.2f",area);


}

