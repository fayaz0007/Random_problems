#include <stdio.h>

int main(){
    long long a,b,c,q;
    
    scanf("%lld%lld%lld",&a,&b,&c);
    q = (a*b)/c;
    if(q != 1){
        printf("double\n");
    }
    else if (q >= -2147483648  && q <= 2147483647){
        printf("int\n");
    }
    else{
        printf("long long\n");
    }
}