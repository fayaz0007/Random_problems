// #include <iostream>
// using namespace std;
// int main(){
//     int i,l,j,n,count=1;
//     cin>>l>>n;
//     for(i=1;i<=n/3;i++){
//         for(j=1;j<=l;j++){
//             cout<<count<<" ";
//             count++;
//             if(count>n){
//                 break;
//             }
//         }
//         cout<<endl;
//         if(count>n){
//             break;
//         }
//     }
//     return 0;
// }
#include <iostream>
using namespace std;
int main(){
    int i,n,l,z,count=1;
    cin>>l>>n;
    if(l>n){
        z=l;
        l=n;
        n=z;
    }
    for(i=1;i<=n;i++){
        if(count==l){
            cout<<i<<endl;
            count=1;
        }
        else{
            cout<<i<<" ";
            count++;
        }
    }
}
// #include <iostream>

// using namespace std;

// int main(){
    
//     int x,y;
    
//     cin >> x;
//     cin >> y;
    
//     int n = 1;
    
//     for(int i = 1; i <= y; i++){
//             if(n == x) {
//                  cout << i << "\n";
//                  n = 1;
//             }
//             else{
//             cout << i << " ";
//             n++;
//             }
//     }
//     return 0;
// }