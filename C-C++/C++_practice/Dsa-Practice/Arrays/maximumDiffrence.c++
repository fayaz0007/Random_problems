#include <bits/stdc++.h>
using namespace std;
//Naive Solution
// void maxixmumDifference(int arr[],int n){
// int difference = arr[1] - arr[0];
//     for(int i = 0;i<n;i++){
//         for(int j = i+1;j<n;j++){
//             difference = max(difference,arr[j]-arr[i]);
            
//         }
//     }
//     cout<<difference;
// }
//eficiant Solution
void maximumNumber(int arr[],int n){
    int maxDiff = arr[1] - arr[0],minValu = arr[0];
    for(int j =1; j <n;j++){
        maxDiff = max(maxDiff,arr[j]-minValu);
        minValu = min(arr[j],minValu);
    }
    cout<<maxDiff;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    maximumNumber(arr,n);
}