#include <bits/stdc++.h>
#define YES cout << "YES\n"
#define NO cout << "NO\n"
using namespace std;
typedef long long ll;

ll n, m;

bool check(vector<string> &v, ll r, ll c) {
    char ch = v[r][c];
    bool row_check = all_of(v[r].begin(), v[r].end(), [ch](char x) { return x == ch; });
    bool col_check = all_of(v.begin(), v.end(), [c, ch](string &row) { return row[c] == ch; });
    return !row_check && !col_check;
}

void solve() {
    cin >> n >> m;
    vector<string> v(n);
    for (ll i = 0; i < n; i++) cin >> v[i];

    if (v[0][0] == v[n-1][m-1] || v[0][m-1] == v[n-1][0]) {
        YES;
        return;
    }

    if (check(v, 0, 0) || check(v, 0, m-1) || check(v, n-1, 0) || check(v, n-1, m-1)) {
        YES;
    } else {
        NO;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}