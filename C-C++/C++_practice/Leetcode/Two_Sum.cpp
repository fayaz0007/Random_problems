#include <bits/stdc++.h>
using namespace std;

void checkIndex(int arr[],int n,int key){
    for(int i = 0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==key){
                cout<<i<<" "<<j; 
            }
        }
    }
}


int main(){
    int n,key;
    cin>>n>>key;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    checkIndex(arr,n,key);
}