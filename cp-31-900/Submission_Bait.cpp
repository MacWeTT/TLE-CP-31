#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long long int ll;


// Yes/No O/P
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

template<typename T>
istream &operator>>(istream &is, vector<T> &v) {
    for (T &in : v)
        is >> in;
    return is;
}

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    cin >> a;
    sort(a.begin(), a.end());
    int highest = a[n - 1];

    map<int, int> map;
    for (int i = 0; i < n; i++) map[a[i]]++;
    
    if (map[highest] % 2) {
        yes;
    } else {
        for (auto it : map) {
            if (it.second % 2) {
                yes;
                return;
            }
        }
        no;
    }
}

int main(int argc, char const *argv[]) {
    fast_io;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}