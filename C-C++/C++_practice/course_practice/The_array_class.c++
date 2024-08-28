#include <iostream>
#include <array>
using namespace std;
int main(){
    int i,x[10];
    for(i=0;i<10;i++){
        cin>>x[i];
        if(x[i]<=0){
            x[i]=1;
        }
    }
    for(int j=0;j<10;j++){
        cout<<"x[j] = "<<x[j]<<endl;
    }
}