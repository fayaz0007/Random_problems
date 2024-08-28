#include "bits/stdc++.h"
using namespace std;
int main(){
    int a,b,c,cal1,cal2,cal3;
    string s,q;
    cin>>a>>s>>b>>q>>c;
    cal1 = a+b;
    cal2 = a-b;
    cal3 = a*b;
    if(s == "+"){
        if(cal1 == c){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<cal1;
        }      
    }
    if(s == "*"){
        if(cal3 == c){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<cal3;
        }      
    }
    if(s == "-"){
        if(cal2 == c){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<cal2;
        }      
    }
      
}