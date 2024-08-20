#include <iostream>
using namespace std;
int main(){
    int t,n[60],c;
    cin>>t;
    n[0]=0;
    n[1]=1;
    for(int i=2; i<60; i++){
        n[i]=n[i-2]+n[i-1];
    }
    for(int i=1;i<=t;i++){
        cin>>c;
        cout<<"Fib("<<c<<") = "<<n[c]<<endl;
        c=0;
    }
    return 0;
}