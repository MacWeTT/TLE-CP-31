#include <bits/stdc++.h>
using namespace std;

#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0)
#define endl '\n'
typedef long long int ll;

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    int max_dist = INT_MIN, last = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        max_dist = max(max_dist, a[i] - last);
        last = a[i];
    }
    max_dist = max(max_dist, 2 * (x - a[n - 1]));
    cout << max_dist << endl;
}

int main(int argc, char const *argv[])
{
    fast_io;
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}