#include <bits/stdc++.h>
using namespace std;
// long long Solve(long long arr[], int n){
//     long long count =0,check = 0,min = arr[0];
//     for(int i = 0; i<n;i++){
//         if(arr[i]<min){
//             min = arr[i];
//         }if(arr[i]%2==0){
//             count++;
//         }
//     }
//     if(min%2==0&&count==n){
//         while(true){
//             if(min%2 == 0){
//                 min = min/2;
//                 check++;
//             }else{
//                 break;
//             }
//         }
//     }else{
//         return 0;
//     }
//     return check-1;
    
// }
long long Solve(long long arr[], int n){
    int Lcheck = 0,count=0;
    bool flag = true;
    while(true){
        for(int i = 0;i < n; i ++){
            if(arr[i]%2==0){
                arr[i]=arr[i]/2;
                Lcheck++;
            }else{
                flag = false;
                break;
            }

        }
        if(flag==false){
            break;
        }
        count++;
        
    }
    return count;

    
}
int main(){
    int n;
    cin>>n;
    long long arr[n];
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    int result = Solve(arr,n);
    cout<<result<<endl;
}