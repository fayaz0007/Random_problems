#include <bits/stdc++.h>
using namespace std;

int maxDomain(int m,int n){
    int calculation = m*n/2;
    return calculation;
}
int main(){
    int m,n;
    cin>>m>>n;
    int result = maxDomain(m,n);
    cout<<result<<endl;
}