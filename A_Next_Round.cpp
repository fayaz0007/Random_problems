#include <bits/stdc++.h>
using namespace std;

int check_KthNumber(int arr[],int n){
    bool flag = false;
    int check = 0;
    for(int i = 0;i <n;i++){
        if(arr[i]>0){
            flag = true;
            break;
        }
    }
    if(flag == false){
        check = -1;
    }else {
        check = 0;
    }
    return check;
}
int output(int arr[],int n,int k){
    int count = 0;
    for(int i =0;i<n;i++){
        if(arr[i]>=arr[k-1] && arr[i]>0){
            count++;
        }
    }
    return count;
}

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0;i < n;i++){
        cin>>arr[i];
    }
    int result1 = check_KthNumber(arr,n);
    if(result1==-1){
        cout<<0<<endl;
        return 0;
    }
    int resutl = output(arr,n,k); 
    cout<<resutl<<endl;
}