#include <stdio.h>
int main(){
    long long n,a,temp,r,sum=0;
    scanf("%lli",&n);
    while(n--){
        scanf("%lli",&a);
        while(a>0){
            printf("%lli ",a%10);
            a/=10;

        }
        printf("\n");
    }
}