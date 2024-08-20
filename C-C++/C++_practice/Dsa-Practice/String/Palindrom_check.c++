#include <bits/stdc++.h>
using namespace std;

bool checkPal(string str){
    int strBegin = 0;
    int  strEnd = str.length()-1;
    while(strBegin<strEnd){
        if(str[strBegin]!=str[strEnd]){
            return false;
        }
        strBegin++;
        strEnd--;
    }
    return true;
}

int main(){
    string str;
    cin>>str;
    if(checkPal(str)){
        cout<<"Palindrom"<<endl;

    }else{
        cout<<"notMatched"<<endl;
    }
}