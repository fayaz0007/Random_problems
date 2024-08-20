#include "bits/stdc++.h"
using namespace std;
int main(){
    double x,p,calculation;
    cin>>x>>p;
    calculation = (1-(x/100));
    cout<<fixed<<setprecision(2)<<p/calculation<<endl;
}