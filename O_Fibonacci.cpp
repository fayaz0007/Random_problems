#include <bits/stdc++.h>
using namespace std;
long long Solution(long long n){
    long long arr[50],calcu,constValue = 0;
    arr[0] = 0;
    arr[1] = 1;
    if(n==0||n==1){
        return constValue;
    }
    for(int i = 2;i <= n;i++){
        arr[i] = arr[i-2] + arr[i-1];
        }
    
    return  calcu = arr[n-1];
}
int main(){
    long long n,result;
    cin>>n;
    result=Solution(n);
    cout<<result<<endl;
}