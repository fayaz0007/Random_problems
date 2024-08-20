#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int u = n;
    for(int i = 0;i<n;i++){
        for(int j=u;j>0;j--){
            printf("*");
        }
        printf("\n");
        u--;
    }
}