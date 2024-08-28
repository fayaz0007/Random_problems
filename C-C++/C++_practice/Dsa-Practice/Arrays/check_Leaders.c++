#include <bits/stdc++.h>
using namespace std;
//Naive solution 
// void checkLeaders(int arr[], int n){
//     for(int i = 0;i<n;i++){
//         bool flag = false;
//         for(int j =  i+1;j<n;j++){
//             if(arr[i]<=arr[j]){
//                 flag = true;
//                 break;
//             }
//         }
//         if(flag == false){
//             cout<<arr[i];
//         }
        
//     }
// }
//efficiant solution
void checkLeaders(int arr[], int n){
    int currentLeaders = arr[n-1];
    cout<<currentLeaders;
    for(int i = n-2; i>= 0 ; i--){
        if(currentLeaders < arr[i]){
            currentLeaders = arr[i];
            cout<<currentLeaders;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    checkLeaders(arr,n);
}