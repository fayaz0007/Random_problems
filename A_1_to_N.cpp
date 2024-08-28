#include <stdio.h>
#include <conio.h>
int main(){
    int num,i,flag=0;
    printf("PLese enter the Size of this arrary: ");
    scanf("%d",&num);
    char arr[num];
    
    for(i = 0 ;i<num;i++){
        printf("\nPlese Enter the value: ");
        arr[i] = getche();
        if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'){
            flag++;
        }
        else if(arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U'){
            flag++;
        }
    }
    if(flag==0){
        printf("\nThere are is no vowel\n");

    }
    else if(flag>0){
        printf("\nThere is %d vowel",flag);
    }
}