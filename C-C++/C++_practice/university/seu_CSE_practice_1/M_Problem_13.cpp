// #include <bits/stdc++.h>   //c aproch
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     if( n%2 != 0 || n<=2){ 
//         cout<<"NO";
//     }
//     else{
//         cout<<"YES";
//     }
// }
#include <bits/stdc++.h> //c++ aproch
using namespace std;
int main(){
    int n;
    int calcu = 0;
    cin>>n;
    string output = (n<=2||n%2)?"NO":"YES";
    cout<<output<<endl;
}