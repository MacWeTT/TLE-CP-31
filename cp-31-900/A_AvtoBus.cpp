#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
typedef long long int ll;

void solve() {
    ll n;
    cin >> n;

    if (!(n % 2) && n >= 4) {
        !(n % 6) ? cout << n / 6 : cout << n / 6 + 1;
        cout << " ";
        cout << n / 4 << endl;
    } else cout << -1 << endl;
}

int main() {
    fast_io;
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}
