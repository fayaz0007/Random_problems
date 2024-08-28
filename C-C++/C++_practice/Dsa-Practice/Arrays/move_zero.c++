#include <bits/stdc++.h>
using namespace std;
//naive Solution
// void moveZero(int arr[],int n){
//     for(int i=0 ; i<n;i++){
//         if(arr[i]==0){
//             for(int j = i+1;j<n;j++){
//                 if(arr[j]!=0){
//                     swap(arr[i],arr[j]);
//                 }
//             }
//         }
//     }
// }
//eficiant solution
void moveZero(int arr[],int n){
    int count = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
}

int main(){
    int n,i;
    cin>>n;
    int arr[n];
    for(i = 0;i<n;i++){
        cin>>arr[i];
    }
    moveZero(arr,n);
    for(i = 0;i<n;i++){
        cout<<arr[i];
    }
}
