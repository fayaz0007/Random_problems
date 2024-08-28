#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n>>s;

    int cut = 0, res = 0;
    string ans;
    for(int i= 0;i<n-1;i++){
        cut = 0;
        for(int j = 0;j<n-1;j++){
            if(s[i]==s[j]&&s[i+1]==s[j+1]){
                cut++;
                if(res<cut){
                    res = cut;
                    ans = string(1,s[i]) + string(1,s[i+1]);
                }
            }
        }
    }
    cout<<ans<<endl;
}