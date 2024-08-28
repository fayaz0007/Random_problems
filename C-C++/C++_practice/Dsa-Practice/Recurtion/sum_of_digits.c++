#include <bits/stdc++.h>
using namespace std;

int sumOfdigits(int n){
    if(n==0){
        return 0;
    }
    return sumOfdigits(n/10)+ n%10;
}


int main(){
    int n;
    cin>>n;
    cout<<sumOfdigits(n)<<endl;
}