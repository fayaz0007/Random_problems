#include <iostream>
using namespace std;
int main(){
    int n[20],i;
    for(i = 0; i<20; i++){
        cin>>n[i];
    }
    for(i=0;i<20;i++){
        cout<<"N["<<i<<"] = "<<n[19-i]<<endl;
    }
}