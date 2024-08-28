#include "iostream"
using namespace std;
int main(){
    char takeInput;
    cin>>takeInput;
    if(takeInput >='A'&&takeInput <='Z'){
        cout<<"ALPHA"<<endl;
        cout<<"IS CAPITAL"<<endl;
    }
    else if(takeInput >='0' && takeInput <= '9'){
        cout<<"IS DIGIT"<<endl;
    }
    else{
        cout<<"ALPHA"<<endl;
        cout<<"IS SMALL"<<endl;
    }
}