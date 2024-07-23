#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define endl '\n'
typedef long long int ll;

#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    int a, b; cin >> a >> b;
    int xk, yk; cin >> xk >> yk;
    int xq, yq; cin >> xq >> yq;

    int dx[] = { a, -a, a, -a, b, -b, b, -b };
    int dy[] = { b, b, -b, -b, a, a, -a, -a };


    set<pair<int, int>> kingPossible, queenPossible;
    for (int i = 0; i < 8; i++) {
        int x = xk + dx[i], y = yk + dy[i];
        kingPossible.insert({ x, y });

        x = xq + dx[i], y = yq + dy[i];
        queenPossible.insert({ x, y });
    }

    set<pair<int, int>> common;
    for (auto &pos : kingPossible) {
        if (queenPossible.count(pos)) {
            common.insert(pos);
        }
    }

    cout << common.size() << endl;
}

int main(int argc, char const *argv[]) {
    fast_io;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}

