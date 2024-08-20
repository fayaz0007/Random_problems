#include <bits/stdc++.h>
using namespace std;
long long smalestPair(long long arr[],long long n){
    long long smalest = arr[0], index = 0;
    for(int i = 0; i < n; i++){
        smalest = min(smalest,arr[i]);
        index++;

    }
    return smalest;
}
long long checkFrequince(long long arr[], long long n, long long smalest){
    int freq = 0;
    for(int i = 0;i <n; i++){
        if(arr[i]==smalest){
            freq++;
        }
    }
    return freq;
}
int main(){
    int n;
    cin>>n;
    long long arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    long long smalest = smalestPair(arr,n);
    long long fre = checkFrequince(arr,n,smalest);
    if(fre%2==0){
        cout<<"Unlucky"<<endl;
    }else{
        cout<<"Lucky"<<endl;
    }
    
}