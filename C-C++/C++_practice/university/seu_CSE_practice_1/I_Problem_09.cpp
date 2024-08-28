#include <iostream>
using namespace std;
int main(){
    int i;
    char arr[100];
    cin>>arr;
    int c,m;
    for(i=0;arr[i]!='\0';i++){
        c++;
    }
    m=c-2;
    cout<<arr[0]<<m<<arr[c-1]<<endl;

}