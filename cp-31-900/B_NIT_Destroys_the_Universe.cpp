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
    int n; cin >> n;
    vector<int> a(n);
    cin >> a;

    int last = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] and last == 0) count++;
        last = a[i];
    }
    count > 1 ? cout << 2 << endl : cout << count << endl;
}

int main(int argc, char const *argv[]) {
    fast_io;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}
