#include "bits/stdc++.h"
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int num1 = a;
    int num2 = b;
    int num3 = c;
    int temp = 0;
    if (a>b){
        temp = a;
        a = b;
        b = temp;
    }
    if (a>c){
        temp = a;
        a = c;
        c = temp;
    }    
    if(b>c){
        temp = b;
        b = c;
        c = temp;
    }
    cout<<a<<endl<<b<<endl<<c<<endl<<""<<endl;
    cout<<num1<<endl<<num2<<endl<<num3<<endl;
}