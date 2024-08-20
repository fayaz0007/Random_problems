#include "bits/stdc++.h"
using namespace std;
int main(){
    int X,firstDigit;
    cin>>X;
    if(X<=100){
        firstDigit = X/100;
    }
    else if(X>=1000){
        firstDigit = X/1000;
    }
    if (firstDigit%2 == 0){
        cout<<"EVEN"<<endl;

    }
    else{
        cout<<"ODD"<<endl;
    }
}