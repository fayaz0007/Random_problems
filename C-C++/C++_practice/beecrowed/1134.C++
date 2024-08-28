#include <iostream>
using namespace std;
int main(){
    int n,alco=0,gesolin=0,dis=0;
    while(1){
        cin>>n;
        if(n<0||n>4){
            continue;
        }
        else if(n==1){
            alco+=1;
        }
        else if(n==2){
            gesolin+=1;
        }
        else if(n==3){
            dis+=1;
        }
        else if(n==4){
            break;
        }
    }
    cout<<"MUITO OBRIGADO"<<endl<<"Alcool: "<<alco<<endl<<"Gasolina: "<<gesolin<<endl<<"Diesel: "<<dis<<endl;
    return 0;
}