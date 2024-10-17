#include <bits/stdc++.h>
using namespace std;
int main(){ 
    int a,b,c;
    cin>>a>>b>>c;
    int ans1 = (a+b)*c, ans2 = a*(b+c), ans3 = a+b*c, ans4 = a*b*c, ans5 = a+b+c;
    int  ans = max(max(max(max(ans1,ans2),ans3),ans4),ans5);

    cout<<ans<<endl;
}