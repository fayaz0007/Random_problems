#include <stdio.h>
 int main(){
    int  num1,i;
    scanf("%d",&num1);
    for(i=1;i<=12;i++){
        printf("%d * %d = %d\n",num1,i,num1*i);
    }
 }