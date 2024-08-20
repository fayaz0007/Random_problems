#include <iostream>
using namespace std;
int main(){
    int t,c,i;
    long long int n[60];
   
    n[0]=0;
    n[1]=1;
    for(i=2; i<=60; i++){
        n[i]=n[i-2]+n[i-1];
    }
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>c;
        cout<<"Fib("<<c<<") = "<<n[c]<<endl;
    }
    return 0;
}