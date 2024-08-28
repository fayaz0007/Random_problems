#include "bits/stdc++.h"
using namespace std;
int main(){
    string s;
    int a,b;
    cin>>a>>s>>b;
    if(a>b && s ==">"){
        cout<<"Right"<<endl;
    }
    else if(a<b && s=="<"){
        cout<<"Right"<<endl;
    }
    else if(a==b && s=="="){
        cout<<"Right"<<endl;
    }
    else{
        cout<<"Wrong"<<endl;
    }
}