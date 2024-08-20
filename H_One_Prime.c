#include <stdio.h>
int main(){
    long long a,i,check=0;
    scanf("%lli",&a);
    for(i = 2;i <= a/2;i ++){
        if(a%i==0){
            printf("NO");
            check++;
            break;
        }
    }
    if(check==0){
        printf("YES");
    }
}