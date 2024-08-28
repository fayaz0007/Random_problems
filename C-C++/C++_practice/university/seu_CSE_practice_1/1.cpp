#include <iostream>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);

    int h,w;
    cin>>h>>w;

    int r,c;
    cin>>r>>c;

    cout<<(r!=1)+(c!=1)+(r!=h)+(c!=w)<<endl;
}