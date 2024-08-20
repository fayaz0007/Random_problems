#include <iostream>
using namespace std;
int main(){
    int x,z,i,sum=0,count=0;
    cin>>x>>z;
    sum = x;
    while(z<=x){
        cin>>z;
    }
    for(i=x;i<z;i++){
        sum+=i+1;
        count+=1;
        if(sum>z){
            count+=1;
            break;
        }
    }
    cout<<count<<endl;
}