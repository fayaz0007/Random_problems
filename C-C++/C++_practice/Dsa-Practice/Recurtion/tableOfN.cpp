#include <bits/stdc++.h>
using namespace std;
void Table(int n,int last = 1){
    if(last<=10){
        cout<<n*last<<endl;
    }
    Table(n,last+1);
}

int main(){
    int n;
    cin>>n;
    Table(n);
}