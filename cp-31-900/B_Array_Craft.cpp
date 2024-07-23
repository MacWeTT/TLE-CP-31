#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long long int ll;

// Vector I/O
template<typename T>
ostream &operator<<(ostream &os, const vector<T> &v) {
    for (int i = 1; i < (int) v.size(); i++) {
        os << v[i] << (i + 1 != v.size() ? " " : "");
    }
    return os;
}

void solve() {
    int n, x, y; cin >> n >> x >> y;
    vector<int> a(n + 1);

    for (int i = y; i <= x; i++) a[i] = 1;

    int flag = -1;
    for (int i = y - 1; i >= 1; i--) {
        a[i] = flag;
        flag *= -1;
    }
    flag = -1;
    for (int i = x + 1; i <= n; i++) {
        a[i] = flag;
        flag *= -1;
    }
    cout << a;
    cout << endl;
}

int main(int argc, char const *argv[]) {
    fast_io;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}