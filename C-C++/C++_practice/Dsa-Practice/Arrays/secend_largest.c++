// #include <bits/stdc++.h>
// using namespace std;

// int getLargest(int arr[],int n){
//     int largest = 0;
//     for(int i=0;i<n;i++){
//         if(arr[i]>arr[largest]){
//             largest = i;
//         }
//     }
//     return largest;
// }
// int secendLargest(int arr[],int n){
//     int largest = getLargest(arr,n);
//     int res = -1;
//     for(int i = 0;i<n;i++){
//         if(arr[i]!=arr[largest]){
//             if(res == -1){
//                 res = i;
//             }
//             else if(arr[i]>arr[res]){
//                 res = i;
//             }
//         }
//     }
//     return res;

// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<secendLargest(arr,n)<<endl;
// }

//
#include <bits/stdc++.h>
using namespace std;

int secoundLargest(int arr[],int n){
    int largest = 0;
    int res = -1;
    for(int i =0;i<n;i++){
        if(arr[i]>arr[largest]){
            res = largest;
            largest = i;
        }
        else if(arr[i]!=arr[largest]){
            if(res==-1||arr[i]>arr[largest]){
                res = i;
            }
        }
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int answer = secoundLargest(arr,n);
    cout<<arr[answer]<<endl;
}
