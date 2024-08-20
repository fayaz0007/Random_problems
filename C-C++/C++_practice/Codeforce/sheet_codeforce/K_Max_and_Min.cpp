#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c,max,min;
    cin>>a>>b>>c;
    if(a>b&&a>c){
        if(b>c){
            max=a;
            min=c;
        }
        else{
            max=a;
            min=b;
        }
    }
}