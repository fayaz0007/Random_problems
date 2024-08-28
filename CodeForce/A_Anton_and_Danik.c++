#include <bits/stdc++.h>
using namespace std;

void checkWinRation(int n){
    string wonRatio;
    int Anton = 0;
    int Danik =0;
    cin>>wonRatio;
    for(int i = 0; i<n;i++){
        if(wonRatio[i]=='A' ){
            Anton++;
        }else if(wonRatio[i] == 'D'){
            Danik++;
        }
    }
    if(Anton>Danik){
        cout<<"Anton"<<endl;
    }else if(Danik>Anton){
        cout<<"Danik"<<endl;
    }else{
        cout<<"Friendship"<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    checkWinRation(n);
}