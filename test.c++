#include <iostream>
using namespace std;

int main(){
    int n,l,k,h;
    cin>>n;
    while(n!=0){
        l=n%10;
        n/=10;
        h+=l;
        cout<<l<<endl;
        
    }
    cout<<h<<endl;
}