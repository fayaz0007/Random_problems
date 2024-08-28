#include <iostream>
using namespace std;
int main(){
    int i,t,n[1000],f=0,z=0;
    cin>>t;
    for(i=0;i<1000;i++){
        n[i]=f;
        f++;
        z++;
        if(z==t){
            f=0;
            z=0;
        }
    }
    for(i=0;i<1000;i++){
        cout<<"N["<<i<<"] = "<<n[i]<<endl;
    }
}