#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long long int ll;

void solve() {
    int n, m; cin >> n >> m;
    string x, s; cin >> x; cin >> s;

    for (int i = 0; i <= 5; i++) {
        if (x.find(s) != string::npos) {
            cout << i << endl;
            return;
        } else x += x;
    }
    cout << "-1" << endl;
}

int main(int argc, char const* argv[]) {
    fast_io;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}