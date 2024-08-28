#include <iostream>
using namespace std;
int main(){
    int i,j=0,n,x,y,sum=0;
    cin>>n;
    while(n!=0){
        cin>>x>>y;
        while(y!=0){
            if(x%2!=0){
                sum+=x;
                y-=1;
                x+=1;
            }
            x+=1;
        }
        cout<<sum<<endl;
        n-=1;
        sum=0;
    }
    
}
