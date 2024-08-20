#include <bits/stdc++.h>
using namespace std;

void solution(int n){
    for(int i = 1;i<=n;i++){
        int num1 , num2;
        cin>>num1>>num2;
        if(num1>=num2){
            cout<<num2<<" "<<num1<<endl;;
        }else{
            cout<<num1<<" "<<num2<<endl;
        }
    }
}
int main(){
    int n;
    cin>>n;
    solution(n);
}