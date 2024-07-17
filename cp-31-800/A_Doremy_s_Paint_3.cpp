#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long long int ll;

void solve() {
    int n; cin >> n;
    map<int, int> map;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        map[x]++;
    }

    if (map.size() >= 3) cout << "No" << endl;
    else {
        if (abs(map.begin()->second - map.rbegin()->second) <= 1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}

int main(int argc, char const* argv[]) {
    fast_io;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}