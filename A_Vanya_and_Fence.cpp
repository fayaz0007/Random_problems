#include <bits/stdc++.h>
using namespace std;

int requirWidth(int n, int height){
    int sum = 0;
    for(int i =0 ; i<n;i++){
        int takeInput;
        cin>>takeInput;
        if(takeInput > height){
            sum+=2;
        }else{
            sum+=1;
        }    
    }
    return sum;
}

int main(){
    int n,height;
    cin>>n>>height;
    int result = requirWidth(n,height);
    cout<<result<<endl;
}