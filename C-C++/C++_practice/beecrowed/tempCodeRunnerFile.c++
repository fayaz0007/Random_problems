#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int j,n,i;
    float sum=0,cun=0;
    while(1){
        cin>>n;
        if(n>0){
            sum+=n;
            cun++;
        }
        else{
            break;
        }
    
    }
    cout<<fixed<<setprecision(2)<<sum/cun<<endl;
}