#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int v=n;
    for(int i=1;i<=n;i++){
        for(int k = 1;k<=v-1;k++){
            cout<<" ";
            
        }
        for(int j = 1 ; j<i*2 ; j++){
            cout<<"*";
        }
        cout<<endl;
        v--;
    }
    int j=1;
    for(int i=n;i>=1;i--){
        for(int d = 1;d<j;d++){
            cout<<" ";
            
        }
        for(int g = i*2 ; g>1 ; g--){
            cout<<"*";
        }
        cout<<endl;
        j++;
    }
    
}