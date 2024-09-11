#include <bits/stdc++.h>
using namespace std;

int main(){

    int m,n,count = 0;
    cin>>m>>n;
    while(true){
        if(m==0 || n==0){
            break;
        }
        m-=1;
        n-=1;
        count++;
    }
    if(count%2==0){
        cout<<"Malvika"<<endl;
    }else{
        cout<<"Akshat"<<endl;
    }
}