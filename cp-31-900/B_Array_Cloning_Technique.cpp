#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long long int ll;

void solve() {
    int n; cin >> n;
    map<int, int> hash;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        hash[x]++;
    }
    int maxCount = 0;
    for (auto pair : hash) {
        maxCount = max(maxCount, pair.second);
    }

    int ans = 0;
    while (maxCount < n) {
        int difference = min(n - maxCount, maxCount);
        ans += 1 + difference;
        maxCount += difference;
    }
    cout << ans << endl;
}

int main(int argc, char const *argv[]) {
    fast_io;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}