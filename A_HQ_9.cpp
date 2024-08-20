#include <bits/stdc++.h>
using namespace std;
int main(){
    string inputIntruction;
    getline(cin,inputIntruction);
    int n = inputIntruction.size();
    bool check = false;
    for(int i = 0;i<n;i++){
        if(inputIntruction[i] == 'H' || inputIntruction[i] == 'Q'||inputIntruction[i] == '9'){
            check = true;
        }
    }
    if(check == true){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}