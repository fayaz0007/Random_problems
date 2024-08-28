#include <bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin>>n;
    int k = n.length();
    string num[k];
    for(int i = 0;i<k-1;i++){
        if(i==k-2){
            num=num + n[k-1];
        }
        num[i]=n[i];
        
    }
    cout<<num<<endl;


}