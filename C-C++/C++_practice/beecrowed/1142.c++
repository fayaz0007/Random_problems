#include <iostream>
using namespace std;
int main(){
    int j=2,i,n,k=1,l=3;
    cin>>n;
    for(i=1;i<=n;i++){
        cout<<k<<" "<<j<<" "<<l<<" "<<"PUM"<<endl;
        k+=4;
        j+=4;
        l+=4;
    }
}