#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long long int ll;

void solve() {
    int n; cin >> n;
    n % 3 ? cout << "First" << endl : cout << "Second" << endl;
}

int main(int argc , char const* argv[]) {
    fast_io;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}