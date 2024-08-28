#include <bits/stdc++.h>
using namespace std;

bool solution(string s,string t){
    
    int space = s.length();
    int j = 0;
    bool check = true;
    for(int i = space-1;i>=0;i--){
        if(t[j]!=s[i]){
            check=false;
            break;
        }
        j++;
        
    }
    if(check==true){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return true;
    
}
int main(){
    string s,t;
    cin>>s>>t;
    solution(s,t);

}