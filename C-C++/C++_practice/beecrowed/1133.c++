#include "iostream"
using namespace std;
int main(){
    int x,y,z,i;
    cin>>x>>y;
    if (x<y){
        z=x;
        x=y;
        y=z;
    }
    for(i=y+1;i<x;i++){
        if(i%5==2||i%5==3){
            cout<<i<<endl;
        }
    }
    return 0;
}