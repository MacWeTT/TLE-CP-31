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

// Yes/No O/P
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n), left(n), right(n);
    int leftCount = 0, rightCount = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        left[i] = a[i] % 2 ? ++leftCount : leftCount;
    }
    for (int i = n - 1; i >= 0; i--) {
        right[i] = a[i] % 2 ? ++rightCount : rightCount;
    }

    for (int i = 0; i < q; i++) {
        int l, r, k; cin >> l >> r >> k;
        l--, r--;

        leftCount = l == 0 ? 0 : left[l - 1];
        rightCount = r == n - 1 ? 0 : right[r + 1];

        int oddsOutside = leftCount + rightCount;
        int oddsInside = k % 2 ? r - l + 1 : 0;

        (oddsInside + oddsOutside) % 2 ? yes : no;
    };
}

int main(int argc, char const *argv[]) {
    fast_io;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}