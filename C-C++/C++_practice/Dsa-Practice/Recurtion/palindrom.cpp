#include <bits/stdc++.h>
using namespace std;

bool palinDrome(string n, int start = 0, int end = -1){
    if(end==-1){
        end=n.size()-1;
    }
    if(start >= end){
        return true;
    }
    if(n[start] == n[end]){
        return palinDrome(n, start + 1, end - 1);
    }
    return false;
}

int main(){
    string ask;
    cin >> ask;
    if(palinDrome(ask)){
        cout << "Yes" << endl;
    } else {
        cout << "NO" << endl;
    }
}
