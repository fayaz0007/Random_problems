#include <iostream>
using namespace std;
int main(){
    int x,y,i,sum=0;
    cin>>x;
    for(i = 1;i<=x;i++){
        cin>>y;
        sum=0;
        for(int j = 1; j<=(y/2);j++){
            if(y%j==0){
                sum+=j;
            }
            
        }
        if(sum==y){
            cout<<y<<" eh perfeito"<<endl;
        }
        else{
            cout<<y<<" nao eh perfeito"<<endl;
        }
    }
}