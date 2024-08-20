#include <bits/stdc++.h>
using namespace std;
void Solve(long long arr[],int n){
    long long min = arr[0],max = arr[0],mxCount = 0,miCount = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
            miCount = i;
        }else if(arr[i]>max){
            max = arr[i];
            mxCount=i;
        }
        
    }
    swap(arr[miCount],arr[mxCount]);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    int n;
    cin>>n;
    long long arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    Solve(arr,n);
    
}