#include <stdio.h>
int main(){
    int num1,sum=0;
    scanf("%d",&num1);
    int temp = num1;
    while(temp!=0){
        sum = sum*10+temp%10;
        temp=temp/10;
    }
    if(sum == num1){
        printf("%d\nYES",num1);
    }
    else{
        printf("%d\nNO",sum);
    }
}