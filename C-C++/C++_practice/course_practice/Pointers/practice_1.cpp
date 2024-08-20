#include <bits/stdc++.h>
using namespace std;
int main(){
    int i =5;
    int *p = &i;
    *p+=1;
    cout<<*p<<endl;
    cout<<p<<endl;
    cout<<i<<endl;
    return 0;
}