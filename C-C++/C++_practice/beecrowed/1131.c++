#include <iostream>
using namespace std;
int main(){
    int x,y,z,lnter=0,gremio=0,draws=0,grenais=0;
    while(1){
        cin>>x>>y;
        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
        grenais+=1;
        if(x>y){
            lnter+=1;
        }
        else if(y>x){
            gremio+=1;
        }
        else{
            draws+=1;
        }
        cin>>z;
        if(z==1)
            continue;
        else
            break;
    }
    cout<<grenais<<" grenais"<<endl;
    cout<<"Inter:"<<lnter<<endl;
    cout<<"Gremio:"<<gremio<<endl;
    cout<<"Empates:"<<draws<<endl;
    if(lnter>gremio)
        cout<<"Inter venceu mais"<<endl;
    else
        cout<<"Gremio venceu mais"<<endl;
    return 0;

}