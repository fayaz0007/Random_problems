#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve() {
	int n;
	cin>>n;
	
	int rem =max( n-(26*2),1ll);
	cout<<(char)('a'+rem-1)<<"";
	n-=rem;
	
	rem = max(1ll,n-26);
	cout<<(char)('a'+rem-1)<<"";
	n-=rem;

	cout<<(char)('a'+n-1)<<"\n";
}

int32_t main() {
    
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tests=1;
    cin >> tests;
    while (tests--) {
        solve();
    }
    return 0;
}