#include <iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int sum = 1;
    for(i=1;i<=n;i++){
        sum*=i;
    }
    cout<<sum<<endl;
}