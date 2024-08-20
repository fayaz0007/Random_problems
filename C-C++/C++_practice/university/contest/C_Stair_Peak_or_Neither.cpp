#include <bits/stdc++.h>
using namespace std;
void solution(int n){
    for(int i =1;i<=n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(b>a && b<c){
            cout<<"STAIR"<<endl;
        }else if(b>a && b>c){
            cout<<"PEAK"<<endl;
        }else{
            cout<<"NONE"<<endl;
        }
    }
}
int main(){
    int n;
    cin>>n;
    solution(n);
}