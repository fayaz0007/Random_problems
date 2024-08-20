#include <stdio.h>
int main(){
    int N,n,i,f=0;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&n);
        if(n>f){
            f=n;
        }
    }
    printf("%d",f);
}