#include <bits/stdc++.h>
using namespace std;
int main(){
float a,b,calcu1,calu2,calcu3;
    cin>>a>>b;
    calcu1=floor(a/b);
    calu2=ceil(a/b);
    calcu3=round(a/b);
    cout<<"floor "<<a<<" / "<<b<<" = "<<calcu1<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<<calu2<<endl;
    cout<<"round "<<a<<" / "<<b<<" = "<<calcu3<<endl;
    return 0;
}