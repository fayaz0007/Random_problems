#include "iostream"
using namespace std;
int main(){
    int i,a,n,cal=0;
    cin>>a>>n;
    while(n<0||n==0)
        cin>>n; 
    for (i=0;i<n;i++){
        cal=cal+a+i;
    }
    cout<<cal<<endl;
    return 0;
}