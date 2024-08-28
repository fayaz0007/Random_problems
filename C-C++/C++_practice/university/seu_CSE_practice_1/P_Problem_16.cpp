// #include <iostream>
// using namespace std;
// int main(){
//     long long int n;
//     cin>>n;
//     int arr[n];
    
//     for(int i = 0; i <= n-1; i++){
//         arr[i]=arr[i]+1;
//     }
//     for(int i = 1; i < n; i++){
//         arr[i]=arr[i]+arr[i-1];
//         arr[i]=arr[i]-1;
//     }
//     cout<<arr[n]<<endl;
// }
#include <iostream>
#define int long long
using namespace std;
signed main(){
    int n;
    cin>>n;
    int sum=n*(n+1)/2;
    cout<<sum-n+1;
}</iostream>