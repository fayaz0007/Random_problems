// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,i;
//     int count=0;
//     cin>>n;
//     for(i = 5; i >= 1;i--){
//         int sum ;
        
//         if((sum+=i)<=n){
//             count++;
//         }
//     }
//     cout<<count<<endl;
// }
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,arr[]={5,4,3,2,1};
    cin>>n;
    int ans=0;
    for(int i = 0; i < 5; i++){
        ans+=n/arr[i];
        n=n%arr[i];
    }
    cout<<ans<<endl;
    return 0;
}