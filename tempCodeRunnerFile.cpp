#include <bits/stdc++.h>
using namespace std;


long long  maxCount(long long arr[],long long n){
    long long count = 1,previusMax = 0,maxCunt = 0;
    for(int i = 0;i<n-1;i++){
        if(arr[i]<=arr[i+1]){
            count++;
        }else{
            
            previusMax = count;
            count = 1;
            if(previusMax<maxCount){
                maxCount = previusMax;
            }
        }
    }
    long long result = max(maxCunt,count);
    
    return result;
    
}
// long long  maxCount(long long arr[],long long n){
//     long long count = 1,previusMax = 0;
//     for(int i = 0;i<n-1;i++){
//         if(arr[i]<=arr[i+1]){
//             count++;
//         }else{
//             cout<<count<<endl;
//             previusMax = count;
//             count = 1;
//         }
//     }
//     long long result = max(previusMax,count);
//     cout<<result<<endl;
    
// }

int main(){
    long long n;
    cin>>n;
    long long arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int result = maxCount(arr,n);
    cout<<result<<endl;
}