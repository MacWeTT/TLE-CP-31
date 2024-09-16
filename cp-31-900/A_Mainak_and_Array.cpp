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
    int n;
    cin >> n;
    vector<int> a(n);
    cin >> a;

    int res = INT_MIN;

    res = max(res, a[n - 1] - a[0]);

    int pivot = a[0];
    for (int i = 1; i < n; i++) {
        res = max(res, a[i] - pivot);
    }

    pivot = a[n - 1];
    for (int i = 0; i < n - 1; i++) {
        res = max(res, pivot - a[i]);
    }

    for (int i = 1; i < n; i++) {
        res = max(res, a[i - 1] - a[i]);
    }

    cout << res << endl;
}

int main(int argc, char const *argv[]) {
    fast_io;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}