#include <bits/stdc++.h>
using namespace std;
#define Size 11
int main(){
    
    int i,j;
    int Table[Size][Size];
    for(i=1;i<Size;i++){
        for(j=1;j<Size;j++){
            Table[i][j]=i*j;
        }
    }
   
    for(i=1;i<Size;i++){
        for(j=1;j<Size;j++){
            printf("%5d ",Table[i][j]);
        }
        printf("\n");
    }
    
    return 0;

}