#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
        if(arr[i]<0){
            arr[i] = 2;
        }
        else if(arr[i]>0){
            arr[i] = 1;
        }
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}