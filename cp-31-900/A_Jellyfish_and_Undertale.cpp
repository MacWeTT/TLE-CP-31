#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long long int ll;

// Vector I/O
template<typename T>
istream &operator>>(istream &is, vector<T> &v) {
    for (T &in : v) is >> in;
    return is;
}

void solve() {
    ll a, b, n; cin >> a >> b >> n;
    vector<ll> x(n);
    cin >> x;
    sort(x.begin(), x.end());

    ll seconds = 0, ind = 0;
    for (int i = 0; i < n; i++) {
        if (b + x[i] <= a) {
            b += x[i];
        } else if (1 + x[i] <= a) {
            seconds += b - 1;
            b = 1 + x[i];
        } else {
            seconds += b - 1;
            b = a;
        }
    }
    cout << seconds + b << endl;
}

int main(int argc, char const *argv[]) {
    fast_io;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}