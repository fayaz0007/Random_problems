#include <bits/stdc++.h>
using namespace std;
void print_N_to_1(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    print_1_to_N(n-1);
    
}
// void print_1_to_N(int n){
//     if(n==0){
//         return;
//     }
    
//     print_1_to_N(n-1);
//     cout<<n<<endl;
    
// }

int main(){
    int n;
    cin>>n;
    print_1_to_N(n);
}