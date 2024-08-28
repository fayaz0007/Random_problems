#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int Lnum = arr[0];
    int point = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]<Lnum){
            Lnum = arr[i];
            point = i;
        }
    }
    cout<<Lnum<<" "<<point+1<<endl;
}