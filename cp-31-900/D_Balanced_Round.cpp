#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long long int ll;

// Vector I/O
template<typename T>
istream &operator>>(istream &is, vector<T> &v) {
    for (T &in : v)
        is >> in;
    return is;
}

void solve() {
    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    cin >> a;
    sort(a.begin(), a.end());

    int count = 0, last = INT_MIN;
    int maxCount = 0;
    for (int i = 0; i < n; i++) {
        if (abs(a[i] - last) > k) {
            count = 1;
            last = a[i];
        } else {
            count++;
            last = a[i];
        }
        maxCount = max(count, maxCount);
    }

    cout << n - maxCount << endl;
}

int main(int argc, char const *argv[]) {
    fast_io;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}