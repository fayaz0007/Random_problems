#include <bits/stdc++.h>
using namespace std;
bool isShorted(int arr[],int n){
   for(int i =0;i<n;i++){
    for(int j = i+1;j<n;j++){
        if(arr[j]<arr[i]){
            return false;
        }
    }
   } 
   return true;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    bool result = isShorted(arr,n);
    if(result==true){
        cout<<"The arrary is shorted"<<endl;
    }
    else if(result == false){
        cout<<"The arrary is not shorted"<<endl;
    }
}