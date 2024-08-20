#include <bits\stdc++.h>
using namespace std;
int main(){
    int n[20],i,v=19;
    for(i=0;i<20;i++){
        cin>>n[i];
    }
    for(i=0;i<20;i++){
        cout<<"N["<<i<<"] = "<<n[v]<<endl;
        v--;
    }
    
}