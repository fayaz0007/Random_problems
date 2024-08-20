#include "iostream"
using namespace std;
int main()
{
    int i,x,y,temp,count=0;
    cin>>x>>y;
    if(x>y){
        temp=x;
        y=x;
        temp=y;
    }
    for(i=x;i<=y;i++){
        if(i%13!=0){
            count+=i;
        }
        
    }    
    cout<<count<<endl;
    return 0;
}