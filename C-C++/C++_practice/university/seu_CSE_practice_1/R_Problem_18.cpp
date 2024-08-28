#include <bits/stdc++.h>
using namespace std;
int main(){
    int count,sum=0,seq,pepol=0;
    cin>>seq;
    for(int i = 1;i<=seq;i++){
        cin>>pepol;
        sum=sum+pepol;
    }
    if(sum%5==0){
        cout<<sum/5<<endl;
    }
    else{
        cout<<sum/5+1<<endl;
    }
    return 0;
} 