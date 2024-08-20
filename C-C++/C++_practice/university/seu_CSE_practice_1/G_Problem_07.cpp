#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;;
    for (int i = 1;i<=n; i++){
        int num = 1;
        for(int j = 1; j<=n; j++){
            if(j<=i){
                cout<<num<<" ";
                num=num*(i-j)/j;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}