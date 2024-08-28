#include <bits/stdc++.h>
using namespace std;

void calcuAray(int n){
    int arr[n];
    for(int i = 0; i <n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
        int v = arr[i];
        for(int j = i+1;j<n;j++){
            v = max(v,arr[j]);
            cout<<v<<" ";
        }
    }
}


int main(){
    int n;
    cin>>n;
    while(n--){
        int k;
        cin>>k;
        calcuAray(k);
        cout<<endl;
    }
}