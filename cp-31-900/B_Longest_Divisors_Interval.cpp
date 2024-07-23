#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long long int ll;

void solve() {
    ll n; cin >> n;
    if (n & 1) cout << 1 << endl;
    else {
        int count = 0, num = 1;
        while (1) {
            if (n % num) break;
            else {
                count++;
                num++;
            }
        }
        cout << count << endl;
    }
}

int main(int argc, char const *argv[]) {
    fast_io;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}