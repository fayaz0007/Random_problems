#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long s;
    int flag=0;
    cin>>s;
    for(int i =0; i<n;i++){
        if(s==arr[i]){
            cout<<i<<endl;
            flag++;
            break;

        }

    }

    if(flag==0){
        cout<<-1<<endl;
    }

}