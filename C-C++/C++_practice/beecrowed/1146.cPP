#include <iostream>
using namespace std;
int main(){
    int i,n,j=1;
    while (1){
        cin>>n;
        for(i=1;i<=n;i++){
            if(j==n){
                cout<<i<<endl;
                j=1;
            }
            else{
                cout<<i<<" ";
                j++;
            }
        }
        if(n==0){
            break;
        }
    }
    return 0;
}