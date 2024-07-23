#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long long int ll;

#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    if (is_sorted(a.begin(), a.end())) {
        bool same = false;
        int diff = INT_MAX;
        for (int i = 0; i < n - 1; i++) {
            if (a[i + 1] - a[i] < diff) {
                diff = a[i + 1] - a[i];
                same = a[i + 1] ^ a[i];
            }
        }
        if (diff == 0) cout << 1 << endl;
        else same ? cout << (diff / 2) + 1 << endl : cout << (diff + 1) / 2 << endl;
    } else cout << 0 << endl;

}

int main(int argc, char const* argv[]) {
    fast_io;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}