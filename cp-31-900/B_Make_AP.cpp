#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long long int ll;

// Yes/No O/P
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    int _a = b - (c - b);
    if (_a >= a and _a % a == 0 and _a != 0) {
        yes; return;
    }

    int _b = a + (c - a) / 2;
    if (_b >= b and (c - a) % 2 == 0 and _b % b == 0 and _b != 0) {
        yes; return;
    }

    int _c = a + 2 * (b - a);
    if (_c >= c and _c % c == 0 and _c != 0) {
        yes; return;
    }

    no; return;
}

int main(int argc, char const *argv[]) {
    fast_io;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}