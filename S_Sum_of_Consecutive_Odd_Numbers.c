#include <stdio.h>
int main(){
    int n,sum=0,temp;
    scanf("%d",&n);
    for(int i= 1;i<=n;i++){
        int num1,num2;
        scanf("%d%d",&num1,&num2);
        if(num2>num1){
            temp = num1;
            num1 = num2;
            num2 = temp;
        }
        for(int j=num2+1;j<num1;j++){
            if(j%2!=0){
                sum+=j;
            }
        } 
        printf("%d\n",sum);
        sum = 0;
    }
}