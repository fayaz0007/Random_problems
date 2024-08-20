#include "iostream"
#include "iomanip"
using namespace std;
int main()
{
    int n,x,i;
    double cal,y;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x>>y;
        if(y==0)
            cout<<"divisao impossivel"<<endl;
        else
        {    
            cal = x/y;
            cout<<fixed<<setprecision(1)<<cal<<endl;
        }    
    }
    return 0;
}