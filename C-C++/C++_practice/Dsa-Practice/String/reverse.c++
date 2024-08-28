#include <bits/stdc++.h>
using namespace std;




int main(){
    int arr[] = {5,3,4,7,10};
    int temp = 0;
    // temp = arr[0];
    // arr[0]=arr[4];
    // arr[4] = temp;
    swap(arr[0],arr[4]);
    for(int i = 0; i <=4;i++){
        cout<<arr[i]<<" ";
    }
}