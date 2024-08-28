#include <bits/stdc++.h>
using namespace std;



//naive Solution
bool inPal(string str){
    string rev = str;
    reverse(rev.begin(),rev.end());
    return (rev==str);
}
int main(){
    string str;
    cin>>str;
    if(inPal(str)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}