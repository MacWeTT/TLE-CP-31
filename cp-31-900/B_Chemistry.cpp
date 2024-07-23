#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long long int ll;

// Yes/No O/P
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    map<char, int> map;
    for (char ch : s) map[ch]++;
    int odds = 0;
    for (auto it : map) {
        if (it.second % 2) odds++;
    }
    (odds <= k + 1) ? yes : no;
}

int main(int argc, char const *argv[]) {
    fast_io;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}