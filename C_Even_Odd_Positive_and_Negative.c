#include <stdio.h>

int main(){
    int i,a,even=0,odd=0,positive=0,negative=0;
    scanf("%d",&a);
    for(i = 0; i<a; i++){
        int b;
        scanf("%d",&b);
        if(b%2!=0){
            odd++;
        }
        if(b%2==0 || b==0)
        {
            even++;
        }
        
        if(b<0){
            negative++;
        }
        if(b>0){
            positive++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d",even,odd,positive,negative);    

}