#include <iostream>
using namespace std;
int main(){
    int TakeInput;
    cin>>TakeInput;
    for(int i = 1;i<=TakeInput;i++){
        for(int k = TakeInput;k>i;k--){
            cout<<" ";
        }
        for(int j = 1;j<(i*2);j++){
            cout<<"*";
        }
        cout<<endl;
    }
}