#include <stdio.h>
int main(){
    int num1;
    scanf("%d",&num1);
    if(num1%4==0){
        if(num1%100==0){
            if(num1%400==0){
                printf("leepyear");
            }
            else{
                printf("No");
            }
        }
        else{
            printf("Leepyear");
        }
    }
    else{
        printf("NO");
    }
}