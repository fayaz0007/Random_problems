#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int suMition(string takeInput,int n){
    int calcu = 0,sum =0;
    for(int i = 0;i<n;i++){
        calcu = takeInput[i] - '0';
        sum += calcu;
        calcu = 0;
    }
    return sum;
}
int main(){
    int n;
    string takeInput;
    cin>>n>>takeInput;
    int result = suMition(takeInput,n);
    cout<<result<<endl;
}