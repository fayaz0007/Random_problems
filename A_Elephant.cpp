#include <bits/stdc++.h>
using namespace std;

// long long stepCount(long long n){
//     long long  count=0;
//     if()
//     return count;
// }

// int main(){
//     long long n;
//     cin>>n;
//     long long result = stepCount(n);
//     cout<<result;
// }
int stepCount(int n) {
    int count = n / 5;
    if (n % 5 != 0) {
        count++;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    int result = stepCount(n);
    cout << result << endl;
    return 0;
}