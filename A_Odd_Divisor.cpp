#include <bits/stdc++.h>
using namespace std;

void checkPowerValue(int n){
    while(n--){
        long long m;
        cin>>m;
            if((m&(m-1))==0){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }
    }
}

int main(){
    long long n;
    cin>>n;
    checkPowerValue(n);
}