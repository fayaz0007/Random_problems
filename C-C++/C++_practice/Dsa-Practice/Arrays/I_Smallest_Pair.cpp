#include <bits/stdc++.h>
using namespace std;
long long smolestPair(long long arr[], int n){
    long long smalestCase = INT_MAX, calculation = 0;
    for(int i =0;i<n;i++){
        for(int j = i+1;j<n;j++){
            calculation = arr[i]+arr[j]+j-i;
            smalestCase = min(smalestCase,calculation);
            
        }

    }
    return smalestCase;

    
}
int main(){
    int k;
    cin>>k;
        while(k--){
            int n;
            cin>>n;
            long long arr[n];
            for(int i = 0;i<n;i++){
                cin>>arr[i];
            }
            int resulr = smolestPair(arr,n);
            cout<<resulr<<endl;
            
        }
}
// #include <iostream>
// #include <climits>
// using namespace std;

// long long smallestSum(int arr[], int n) {
//     long long smallest = LLONG_MAX; // Initialize smallest sum to the maximum possible value
//     for(int i = 0; i < n; i++) {
//         for(int j = i + 1; j < n; j++) {
//             long long sum = arr[i] + arr[j] + j - i;
//             smallest = min(smallest, sum);
//         }
//     }
//     return smallest;
// }

// int main() {
//     int T;
//     cin >> T; // Number of test cases
//     while (T--) {
//         int N;
//         cin >> N; // Number of elements in the array
//         int arr[N];
//         for (int i = 0; i < N; i++) {
//             cin >> arr[i]; // Input array elements
//         }
//         long long result = smallestSum(arr, N);
//         cout << result << endl; // Output the smallest possible sum
//     }
//     return 0;
// }
