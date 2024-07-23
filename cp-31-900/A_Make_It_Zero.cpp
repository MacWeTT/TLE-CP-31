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
    int n; cin >> n;
    vector<int> a(n);
    cin >> a;
    if (n % 2) {
        cout << 4 << endl;

        cout << 1 << ' ' << n - 1 << endl;
        cout << 1 << ' ' << n - 1 << endl;

        cout << n - 1 << ' ' << n << endl;
        cout << n - 1 << ' ' << n << endl;
    } else {
        cout << 2 << endl;

        cout << 1 << ' ' << n << endl;
        cout << 1 << ' ' << n << endl;
    }
}

int main(int argc, char const *argv[]) {
    fast_io;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}