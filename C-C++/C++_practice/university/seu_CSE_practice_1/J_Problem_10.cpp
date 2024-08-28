// #include <iostream>
// #include <cmath>

// using namespace std;

// int main() {
//   int maxcount = 0;
//   int maxnumber = 0;
//   int count = 0;
//   int i;
//   int n;

//   cin >> n;

//   for (i = 1; i <= n; i++) {
//     count = log2(i);  // Calculate the count of consecutive even numbers using log2

//     if (count > maxcount) {
//       maxcount = count;
//       maxnumber = i;
//     }
//   }

//   cout << maxnumber << endl;

//   return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n; cin>>n;
    int x=log2(n);
    cout<<pow(2,x);
 
    return 0;
}