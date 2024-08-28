#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,point;
    cin>>n>>point;
    int min(point),max(point),amazing=0;
    while(--n){
        cin>>point;
        if(point<min){
            min=point;
            amazing++;
        }
        else if(point>max){
            max=point;
            amazing++;
        }
    }
    cout<<amazing<<endl;
}