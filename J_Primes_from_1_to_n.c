// #include <stdio.h>

// int primeNumber(int num){
//         if (num == 1){
//             return -1;
//         }
//         for(int i = 2;i<=num/2;i++){
//             if(num%i==0){
//                 return -1;
//             }
//         }
    
//     }                                     /////Runtime Error its going to take 12 sec; but we have to complete it withen 3 sec;;;;;


// int main(){
//     int num;
//     scanf("%d",&num);
//     for(int i =2;i<=num;i++){
//         if(primeNumber(i)!= -1){
//             printf("%d ",i);
            
//         }
//     }
    
// }


#include <stdio.h>
int main(){
 
    int num,i,j,flag=0;
    scanf("%d",&num);
    if(num == 1){
        printf("%d",num);
    }
    for(i=2;i<=num;i++){
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                flag++;
                
            }
        }
        if(flag==0){
            printf("%d",i);
            printf(" ");
        }
        if(flag>0){
            flag=0;
        }
        
        
    }
}