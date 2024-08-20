#include <bits/stdc++.h>
using namespace std;
int Solution(int n){
    int count = 0;
    string takeInput;
    while(n){
        cin>>takeInput;
        if(takeInput == "X++" || takeInput == "++X"){
            count++;
        }else if(takeInput == "X--" || takeInput == "--X"){
            count = count - 1;
        }
        n--;
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    int result = Solution(n);
    cout<<result;
}