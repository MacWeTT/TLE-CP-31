#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long int ll;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    a[0] == 1 ? cout << "YES" << endl : cout << "NO" << endl;
}

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
int main(int argc , char const* argv[]) {
    fast_io;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}