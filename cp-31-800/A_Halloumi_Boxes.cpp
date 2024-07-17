#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int ll;

void solve() {
    int n , k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    if (k > 1 or is_sorted(a , a + n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

int main(int argc , char const* argv[]) {
    fast_io;
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
