#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long long int ll;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    char last = '$';
    int count = 0, maxCount = 0;
    for (char ch : s) {
        if (ch == last) {
            count++;
        } else {
            last = ch;
            count = 1;
        }
        maxCount = max(count, maxCount);
    }
    cout << maxCount + 1 << endl;
}

int main(int argc, char const *argv[]) {
    fast_io;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}
