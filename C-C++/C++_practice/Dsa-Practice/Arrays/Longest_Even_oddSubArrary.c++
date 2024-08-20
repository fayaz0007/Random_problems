#include <bits/stdc++.h>
using namespace std;

int longestEven(int arr[], int n){
    int res = 0;
    int count = 0;
    for(int i = 0 ;i<n;i++){
        if((arr[i]%2==0 && arr[i-1]%2!=0)||
        (arr[i]%2!=0 && arr[i-1]%2==0)){
            count++;
            res = max(res,count);
        }
        else count = 1;
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int result = longestEven(arr,n);
    cout<<result;
}