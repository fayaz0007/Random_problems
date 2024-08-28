#include <bits/stdc++.h>
using namespace std;

void solution(int n){
    int maxPassenger = 0,existPassenger = 0;

    for(int i = 0;i<n;i++){
        int entringPassenger, leavingPassenger;
        cin>>leavingPassenger>>entringPassenger;
        existPassenger = (existPassenger-leavingPassenger)+ entringPassenger;
        if(existPassenger>maxPassenger){
            maxPassenger = existPassenger;
        } 
    }
    cout<<maxPassenger<<endl;
}
int main(){
    int n;
    cin>>n;
    solution(n);
}