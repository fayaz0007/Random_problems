#include <iostream>
using namespace std;
int main(){
    int pa, pb, t, y;
    double g1, g2;
    cin>>t;
    for(int i = 1 ;i <= t; i++){
        y=0;
        cin>>pa>>pb>>g1>>g2;
        while(pa <= pb){
            pa = pa + ((pa * g1)/100);
            pb = pb + ((pb * g2)/100);
            y++;
            if(y > 100){
                cout<<"Mais de 1 seculo";
                break;
            }
        }
        if(y <= 100){
            cout<<y<<" anos."<<endl;
        }
        
    }
}
