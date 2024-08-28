// #include <iostream>
// #include <math.h>
// using namespace std;
// int main(){
//     int n,i;
//     cin>>n;
//     for(i=0;i<n;i++){
//         cout<<i+1<<" "<<pow(i+1,2)<<" "<<pow(i+1,3)<<endl;
//         cout<<i+1<<" "<<pow(i+1,2)+1<<" "<<pow(i+1,3)+1<<endl;
//     }
// }
#include <iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++){
        cout<<i<<" "<<i*i<<" "<<i*i*i<<"\n";
        cout<<i<<" "<<i*i+1<<" "<<i*i*i+1<<"\n";
    }
}