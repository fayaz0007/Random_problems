#include <bits/stdc++.h>
using namespace std;
void frequinceNumber(int arr[], int n){
    int i = 1, count = 1;
    while(i<n){
        while(i<n && arr[i] == arr[i-1]){
            count++;
            i++;
        }
        cout<<arr[i-1]<<" "<<count<<endl;
        i++;
        count = 1;
    }
    // cout<<arr[i-1]<<" "<<count<<endl;
    if(n == 1||arr[n-1] == arr[n-2]){
        cout<<arr[n-1]<<" "<<1<<endl;
    }
    
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    frequinceNumber(arr,n);
}