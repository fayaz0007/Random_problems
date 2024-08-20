#include <bits/stdc++.h>
using namespace std;

int agreeCounte(int n){
    int count = 0,agreeCoun = 0,takeInput;
    while(n){
        for(int i = 0; i<3 ; i++){
            cin>>takeInput;
            if(takeInput  == 1){
                count++;
            }
        }
        if(count>=2){
            agreeCoun++;
        }
        count = 0;
        n--;
    }
    return agreeCoun;
}

int main(){
    int n;
    cin>>n;
    int result = agreeCounte(n);
    cout<<result;
}