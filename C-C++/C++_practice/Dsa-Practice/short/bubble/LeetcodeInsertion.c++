#include <bits/stdc++.h>
using namespace std;
int main(){
    int head[]= {4,2,1,3};
    for(int i = 0;i<4;i++){
        int current = head[i];
        int j = i-1;
        while(head[j]>current && j>=0){
            head[j+1] = head[j];
            j--;
        }
        head[j+1]=current;

    }
    for(int i=0;i<4;i++){
        cout<<head[i]<<" ";
    }
}