// Naive Solution
#include <stdio.h>
int main(){
    long long hasmot,opponent;
    long long temp = 0;
    while(scanf("%lld%lld",&hasmot,&opponent) != EOF){
        if(hasmot>opponent){
        temp = hasmot;
        hasmot = opponent;
        opponent = temp;
        }
        int difference = opponent - hasmot;
        printf("%d\n",difference);

    }
    
    
    
    
}

// optimized solution

// #include <stdio.h>
// #include <stdlib.h>
// int main(){
// long int hasmot,opponent;
//     while(scanf("%lld%lld",&hasmot,&opponent) != EOF){
//         printf("%lls\n",abs(hasmot - opponent));    
//     }
// }
