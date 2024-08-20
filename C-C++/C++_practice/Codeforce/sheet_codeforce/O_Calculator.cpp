#include "bits\stdc++.h"
using namespace std;
int main(){
    char term;
    int firstNumber,secendNumber;
    cin>>firstNumber>>term>>secendNumber;
    if(term == '+'){
        cout<<firstNumber + secendNumber<<endl;
    }
    else if(term == '-'){
        cout<<firstNumber - secendNumber<<endl;
    }
    else if(term == '*'){
        cout<<firstNumber * secendNumber<<endl;
    }
    else if(term == '/'){
        cout<<firstNumber / secendNumber<<endl;
    }
}
