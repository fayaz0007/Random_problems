#include "bits/stdc++.h"
using namespace std;
int main(){
    char takeInput,resCharecter;
    cin>>takeInput;
    int ask = takeInput;
    
    if(takeInput >=65&& takeInput <= 90){
        ask = ask + 32;
        resCharecter = ask;
        cout<<resCharecter<<endl;
    }
    
    if(takeInput >=90&& takeInput <= 122){
        ask = ask - 32;
        resCharecter = ask;
        cout<<resCharecter<<endl;
    }
}