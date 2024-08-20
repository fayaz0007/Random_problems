#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k=1,loop,i,j,secend_loop,sum;
    cin>>loop;
    for(i=1;i<=loop;i++){
        cin>>secend_loop;
        for(j=1;j<=secend_loop;j++){
            cin>>n;
            if(n>0){
                sum+=n;
            }
        }
        cout<<"Case"<<" "<<k<<":"<<" "<<sum<<endl;
        sum=0;
        k++;
    }
}