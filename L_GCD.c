#include <stdio.h>
int main(){
    int cal1,cal2;
    scanf("%d%d",&cal1,&cal2);
    int div,min,max;
    if(cal2>cal1){
        max = cal2;
        min = cal1;
    }
    else{
        max = cal1;
        min = cal2;
    }
    for(int i=1;i<=max;i++){
        if(cal1%i==0 && cal2 %i == 0){
            div = i;        }
    }
    printf("%d",div);
}