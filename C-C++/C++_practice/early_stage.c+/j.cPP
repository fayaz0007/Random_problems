#include <iostream>
using namespace std;
int main(){
    int n[3],i;
    for(i=0;i<3;i++){
        cin>>n[i];
    }
    for(i=0;i<3;i++){
        cout<<n[i]<<n[i-1];
    }
}