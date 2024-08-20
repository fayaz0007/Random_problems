#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double x,n[100];
    cin>>x;
    for(int i=0;i<100;i++){
        n[i]=x;
        x=x/2;
    }
    for(int i=0;i<100;i++){
        cout<<"N["<<i<<"] = "<<fixed<<setprecision(4)<<n[i]<<endl;
    }
}