#include <bits/stdc++.h>
using namespace std;
int main(){
    int c;
    unsigned long int a,b;
    while(true){
        cin>>a>>b;
        if(b>a){
            c=a;
            a=b;
            b=c;
        }
        cout<<(a-b)<<endl;
    }
}