#include <bits/stdc++.h>
using namespace std;
// void selectionSort(int arr[],int n){
    
//     int temp[n];
//     for(int i = 0;i<n;i++){
//         int min_num = 0;
//         for(int j =1;j<n;j++){
//             if(arr[j]<arr[min_num]){
//                 min_num = j;
//             }
//         }
//         temp[i]=arr[min_num];
//         arr[min_num]=INT_MAX;
        
//     }
//     for(int i = 0;i<n;i++){
//             arr[i]=temp[i];
//         }
// }




void selectionSort(int arr[], int n){ //optimise version of selection sort algorithm
    for(int i = 0;i<n;i++){
        int min_num = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[min_num]){
                min_num = j;
            }

        }
        swap(arr[i],arr[min_num]);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    selectionSort(arr,n);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}