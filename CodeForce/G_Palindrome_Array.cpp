#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,j=0;
    cin>>n;
    long long arr[n],arr1[n];

    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    for(int i = n-1;i >= 0;i--){
        arr1[j] = arr[i];
        j++;
    }
    

}