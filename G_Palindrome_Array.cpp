#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,j=0,flag = 0;;
    cin>>n;
    long long arr[n],arr1[n];
    for(int i = 0;i <n;i++){
        cin>>arr[i];

    }
    for(int i=n-1;i>=0;i--){
        arr1[j] = arr[i];
        j++;
    }
    for(int i = 0;i<n;i++){
        if(arr[i]==arr1[i]){
            flag++;
        }
    }
    if(flag == n){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}