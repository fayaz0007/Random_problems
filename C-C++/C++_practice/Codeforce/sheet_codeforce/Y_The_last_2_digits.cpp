#include "bits/stdc++.h"
using namespace std;
int main(){
    int a,b,c,d,calcu;
    cin>>a>>b>>c>>d;
    a = a%100;
    b=b%100;
    c=c%100;
    d=d%100;
    int x = (a*b*c*d)%100;
    if(x<10){
        cout<<"0"<<x<<endl;
    }
    else{
        cout<<x<<endl;
    }
}