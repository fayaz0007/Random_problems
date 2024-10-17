#include <bits/stdc++.h>
using namespace std;

int main(){

    long long n , k,partion;
    cin>>n>>k;

    if(n%2==0){
        partion = n/2;

    }else{
        partion = (n/2)+1;
    }

    if(k<=partion){
        cout<<(2*k)-1;
    }else{
        cout<<(k-partion)*2;
    }
    



}