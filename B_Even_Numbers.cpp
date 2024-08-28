#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    if(N>=70 && N<=100){
        printf("A");
    }
    else if(N>=60 && N<=69){
        printf("B");
    }
    else if(N>=50 && n<=59){
        printf('C');
    }
    else {
        printf("F");
    }
}