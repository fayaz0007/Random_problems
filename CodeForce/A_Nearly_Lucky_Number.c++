#include <bits/stdc++.h>
using namespace std;
bool checkInput(long long n){
    int check = 0;
    while(n>0){
        if(n%10==4 || n%10 == 7){
            check++;
            n/=10;
        }else{
            n/=10;
        }
    }
    if(check == 4 || check == 7){
        return true;

    }else{
        return false;
    }
}

int main(){
    long long n;
    cin>>n;
    if(checkInput(n) == true ){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}