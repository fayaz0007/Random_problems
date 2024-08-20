#include "bits/stdc++.h"
using namespace std;
//naive solution
// void LeftRoted(int arr[],int n){
//     int temp = arr[0];
//     for(int i =1;i<n;i++){
//         arr[i-1]=arr[i];
//     }
//     arr[n-1]=temp;
//}
//efficiant solution
void leftRoted(int arr[], int n, int d){
    int temp[d];
    for(int i = 0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int i =d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(int i =0;i<d;i++){
        arr[n-d+i]=temp[i];
    }
}
int main(){
    int n,d;
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    leftRoted(arr,n,d);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}