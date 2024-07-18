#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl '\n'
typedef long long int ll;

void solve() {
    char grid[10][10];
    int points = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'X') {
                if (i == 0 or i == 9 or j == 0 or j == 9) points += 1;
                else if (i == 1 or i == 8 or j == 1 or j == 8) points += 2;
                else if (i == 2 or i == 7 or j == 2 or j == 7) points += 3;
                else if (i == 3 or i == 6 or j == 3 or j == 6) points += 4;
                else if (i == 4 or i == 5 or j == 4 or j == 5) points += 5;
            }
        }

    }
    cout << points << endl;
}

int main(int argc, char const* argv[]) {
    fast_io;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}