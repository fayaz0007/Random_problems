#include <bits/stdc++.h>
using namespace std;
void equal(int n){
    int sum = 0,d;
    
    for(int i = 0;i<n;i++){
        cin>>d;
        sum+=d/10;
        sum+=d%10;
        cout<<sum<<endl;
        sum=0;
    }
}

int main(){
    int n;
    cin>>n;
    equal(n);
}