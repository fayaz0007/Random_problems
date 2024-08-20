#include <iostream>
using namespace std;
int main(){
    int x;
    int sum=0,y=5;
    while(true){
        sum=0;
        cin>>x;
        if(x==0){
            break;
        }
        if(x%2!=0) x++;
        for(int i=1;i<=5;i++){
            sum+=x;
            x+=2;       
        }
        cout<<sum<<endl;
    }
}


