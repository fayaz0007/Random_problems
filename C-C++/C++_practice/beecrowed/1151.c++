#include <iostream>
using namespace std;
int main(){
    int sum[46],n,i;
    cin>>n;
    sum[0]=0;
    sum[1]=1;

    for(i=2;i<n;i++){
        sum[i]=sum[i-1]+sum[i-2];
    }
    cout<<"0";
    for(i=1;i<n;i++){
        cout<<" "<<sum[i];
    }
    cout<<endl;
}