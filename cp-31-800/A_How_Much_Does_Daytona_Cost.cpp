#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long long int ll;

#define vec vector<int>
#define pb push_back

void solve() {
    int n, k; cin >> n >> k;
    vec a(n);
    bool found = false;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == k) found = true;
    }
    found ? cout << "YES" << endl : cout << "NO" << endl;
}

int main(int argc, char const* argv[]) {
    fast_io;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}