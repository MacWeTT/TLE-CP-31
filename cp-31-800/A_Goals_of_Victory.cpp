#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long long int ll;

#define vec vector<int>
#define pb push_back

void solve() {
    int n; cin >> n;
    vec a(n - 1);
    ll pos = 0, neg = 0;
    for (int i = 0; i < n - 1; i++) {
        cin >> a[i];
        a[i] >= 0 ? pos += a[i] : neg += -a[i];
    }
    cout << neg - pos << endl;
}

int main(int argc, char const* argv[]) {
    fast_io;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}