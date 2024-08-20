#include <bits/stdc++.h>
using namespace std;

void solution(int n){
    for(int i = 1;i<=n;i++){
        string takeInput;
        cin>>takeInput;
        int firstNumber = takeInput[0] - '0';
        int lastNumber = takeInput[takeInput.size()-1] - '0';
        int result = firstNumber + lastNumber;
        cout<<result<<endl;

    }
    
}

int main(){
    int n;
    cin>>n;
    solution(n);
}
