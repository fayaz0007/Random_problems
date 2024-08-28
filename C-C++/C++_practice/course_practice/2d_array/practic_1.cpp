#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    for(int i = 0;i < n*a;i++){
        for(int j = 0; j < n*b;j++){
            int r = i/a, c = j/b;
            cout<<(((r+c)&1)?'#':'.');
        }
        cout<<endl;
    }
}



// #include <iostream>
// using namespace std;
// int main(){
//     int n,a,b;
//     cin>>n>>a>>b;
//     for(int i =0;i<n*a;i++){
//         for(int j =0;j<n*b;j++){
//             int r =i/a, c =j/b;
//             cout<<(((r+c)&1)?'#':'.');
//         }
//         cout<<endl;
//     }
// }