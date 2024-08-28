#include <bits/stdc++.h>
using namespace std;

    long long solution(long long num, int calTime){
    
    for(int i = 1;i<=calTime;i++){
        if(num%10==0){
            num/=10;
        }else{
            num-=1;
        }
    }
    return num;
}

int main(){
    long long num,calTime;
    cin>>num>>calTime;
    long long result = solution(num,calTime);
    cout<<result;
}