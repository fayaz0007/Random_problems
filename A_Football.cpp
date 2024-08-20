#include <bits/stdc++.h>
using namespace std;

bool teamstrenth(string teamcount){
    int lenth = teamcount.length();
    int totalCount = 1;
    for(int i = 0;i<lenth;i++){
        if(teamcount[i]==teamcount[i+1]){
            totalCount++;
        }else{
            if(totalCount>=7){
                break;
            }
            totalCount = 1;
        }
    }
    if(totalCount>=7){
        return true;
    }else{
        return false;
    }
}

int main(){
    string str;
    cin>>str;
    if(teamstrenth(str)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}