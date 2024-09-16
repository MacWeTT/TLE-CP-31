#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long long int ll;

// Yes/No O/P
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    string s, t, res = "";
    cin >> s; cin >> t;
    int n = s.length(), m = t.length();

    map<char, int> words;
    for (int i = 0; i < m; i++) words[t[i]]++;

    int i = n - 1, j = m - 1;
    while (i >= 0) {
        if (words.find(s[i]) != words.end() && words[s[i]]) {
            res += s[i];
            words[s[i]]--;
        }
        i--;
    }

    reverse(res.begin(), res.end());
    res == t ? yes : no;
}

int main(int argc, char const *argv[]) {
    fast_io;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}