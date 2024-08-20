#include <bits/stdc++.h>
using namespace std;
// int maxSubArrary(int arr[], int n){
//     int res = arr[0];
//     for(int i =0;i<n;i++){
//         int curr = 0;
//         for(int j = i;j<n;j++){
//             curr = curr+arr[j];
//             res = max(res,curr);
//         }
//     }
//     return res;
// }
int maxSubArrary(int arr[], int n){
    int res = arr[0];
    int maxEnding = arr[0];
    for(int i = 1;i<n;i++){
        maxEnding = max(maxEnding  + arr[i],arr[i]);
        res = max(res,maxEnding);
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
    int result = maxSubArrary(arr,n);
    cout<<result;
}