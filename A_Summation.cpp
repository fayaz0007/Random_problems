#include <bits/stdc++.h>
using namespace std;

int main(){
    long long  n;
    cin>>n;
    long long arr[n],sum=0;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<abs(sum)<<endl;

}