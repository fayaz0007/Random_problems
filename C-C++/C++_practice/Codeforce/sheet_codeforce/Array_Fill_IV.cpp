#include <iostream>
using namespace std;
int main(){
    int par [5],impar[5],x,count=0,cut=0,b=15;
    for(int i = 0;i<15;i++){
        cin>>x;
        if(x%2==0){
            par[count]=x;
            count++;
            if(count==5){
                for(int j = 0;j<5;j++){
                    cout<<"par["<<j<<"] = "<<par[j]<<endl;
                    b--;
                    par[j]=0;
                    if(b<0){
                        break;
                    }
                count=0;
                }
            }
        }
        else{
            impar[cut]=x;
            cut++;
            if(cut==5){
                for(int j = 0;j<5;j++){
                    cout<<"impar["<<j<<"] = "<<impar[j]<<endl;
                    b--;
                    impar[j]=0;
                }
                cut=0;
            }
        }
    }
    for(int i =0;i<5;i++){
        if(impar[i]==0) break;
        cout<<"impar["<<i<<"] = "<<impar[i]<<endl;
    }
    for(int i =0;i<5;i++){
        if(par[i]==0) break;
        cout<<"par["<<i<<"] = "<<par[i]<<endl;
    }
    return 0;
}