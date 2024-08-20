#include <stdio.h>

int main(){
    int a,b,c,d;
    scanf("%d",&a);
    b=a%10;
    c=(a-b)/10;
    if(b%c==0 || c%b==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
}