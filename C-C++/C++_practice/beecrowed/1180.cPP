#include <iostream>
using namespace std;
int main(){
    int t,i,x=0,y=0;
    int n[1000];
    cin>>t;
    for(i = 0; i < t; i++){
        cin>>n[i];
    }
    x=n[0];
    for(i=0;i<t;i++){
        if(x>n[i]){
            x=n[i];
            y=i;
        }
    }
    cout<<"Menor valor: "<<x<<"\n"<<"Posicao: "<<y<<endl;
}