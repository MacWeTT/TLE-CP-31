#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long long int ll;
#define first cout << "First" << endl
#define second cout << "Second" << endl
typedef long long int ll;


void solve() {
    int a, b, c; cin >> a >> b >> c;
    if (c % 2) b > a ? second : first;
    else a > b ? first : second;
}

int main(int argc, char const* argv[]) {
    fast_io;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}