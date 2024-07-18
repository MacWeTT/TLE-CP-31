#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long long int ll;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    vector<int> b, c;
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());
    int first = a[0];
    b.push_back(first);
    for (int i = 1; i < n; i++) {
        if (a[i] > first) c.push_back(a[i]);
        else b.push_back(a[i]);
    }
    if (c.empty()) cout << "-1" << endl;
    else {
        cout << b.size() << ' ' << c.size() << endl;
        for (int i = 0; i < b.size(); i++) cout << b[i] << ' ';
        cout << endl;
        for (int i = 0; i < c.size(); i++) cout << c[i] << ' ';
        cout << endl;
    }
}

int main(int argc, char const* argv[]) {
    fast_io;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}