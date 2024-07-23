#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long long int ll;

// Yes/No O/P
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    ll n, k, x; cin >> n >> k >> x;

    if (k > n) {
        no;
    } else {
        ll max = (k * (n - k + 1 + n)) / 2;
        ll min = (k * (1 + k)) / 2;

        (x <= max and x >= min) ? yes : no;
    }
}

int main(int argc, char const *argv[]) {
    fast_io;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}