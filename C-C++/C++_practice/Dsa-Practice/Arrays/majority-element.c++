#include <bits/stdc++.h>
using namespace std;

int majorityElemennt(int arr[], int n){
    // int count = 1;
    // for(int i = 0;i<n;i++){
    //     for(int j = i+1;j<n;j++){
    //         if(arr[i]==arr[j]){
    //             count++;
    //         }
    //     }
    //     if(count>n/2){
    //         return i;
    //     }
    // }
    // return -1;
    int res = 0, count = 1;
    for(int i =1;i<n;i++){
        if(arr[res]==arr[i]){
            count++;
        }else{
            count--;
        }
        if(count==0){
            res =i;
            count=1;
        }
    }
    count = 0;
    for(int i = 0;i<n;i++){
        if(arr[res]==arr[i]){
            count++;
        }
    }
    if(count <=n/2){
        return -1;
    }
    return res;
    
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int result = majorityElemennt(arr,n);
    cout<<result;
}