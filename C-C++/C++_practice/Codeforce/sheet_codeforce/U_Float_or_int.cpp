#include "bits/stdc++.h"
using namespace std;
int main(){
    float n;
    int ask;
    cin>>n;
    ask = n;
    if(n==ask){
        cout<<"int"<<" "<<ask<<endl;
    }
    else{
        cout<<fixed<<setprecision(3)<<"float"<<" "<<ask<<" "<<n-ask<<endl;
    }
}