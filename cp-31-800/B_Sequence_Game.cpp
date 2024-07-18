#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long long int ll;

void solve() {
    int n; cin >> n;
    vector<int> b(n), a;
    int last = INT_MAX;
    for (int i = 0;i < n; i++) {
        cin >> b[i];
        if (i == 0) {
            a.push_back(b[0]);
        } else {
            if (b[i - 1] > b[i]) {
                a.push_back(1);
            }
            a.push_back(b[i]);
        }
    }
    cout << a.size() << endl;
    for (int i = 0; i < a.size(); i++) cout << a[i] << ' ';
    cout << endl;
}

int main(int argc, char const* argv[]) {
    fast_io;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}