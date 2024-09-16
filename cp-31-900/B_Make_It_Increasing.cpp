#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long long int ll;

// Vector I/O
template<typename T>
ostream &operator<<(ostream &os, const vector<T> &v) {
    for (int i = 0; i < (int) v.size(); i++) {
        os << v[i] << (i + 1 != v.size() ? " " : "");
    }
    return os;
}

template<typename T>
istream &operator>>(istream &is, vector<T> &v) {
    for (T &in : v)
        is >> in;
    return is;
}

#define all(x) x.begin(), x.end()

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    cin >> a;

    ll last = INT_MAX, count = 0;
    bool terminated = false;
    for (int i = n - 1; i >= 0; --i) {
        while (a[i] >= last and a[i] != 0) {
            a[i] /= 2;
            count++;
        }
        if (a[i] == 0 and a[i + 1] == 0) {
            cout << -1 << endl;
            terminated = true;
            break;
        }
        last = a[i];
    }
    if (!terminated) cout << count << endl;
}

int main(int argc, char const *argv[]) {
    fast_io;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}