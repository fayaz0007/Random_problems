#include <bits/stdc++.h>
using namespace std;

long long needMoney(long long k,long long n,long long w){
    long long actualMoney = 0;
    for(int i =1;i<=w;i++){
        actualMoney += (i*k);
    }
    actualMoney -=n;
    if(actualMoney<=0){
        return 0;
    }else{
        return actualMoney;
    }

}


int main(){
    long long k,n,w;
    cin>>k>>n>>w;
    int result = needMoney(k,n,w);
    cout<<result;
}