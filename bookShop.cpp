#include <bits/stdc++.h>
 
 
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

 
void solve() { 
    // n is books total
    // x is total price limit
    int n, x;
    cin >> n >> x;
    // First is price
    // Second is pages
    pair<int, int> books[n];
    for (int i = 0; i < n; i++) cin >> books[i].first;
    for (int i = 0; i < n; i++) cin >> books[i].second;

    vector<vector<int>> dp(n + 1, vector<int>(x + 1));
    for (int row = 0; row <= n; row++) {
        for (int col = 0; col <= x; col++) {
            if (row == 0 || col == 0) dp[row][col] = 0;
            else {
                dp[row][col] = dp[row - 1][col];
                if (col >= books[row-1].first) {
                    dp[row][col] = max(dp[row-1][col - books[row-1].first] + books[row-1].second, dp[row][col]);
                }
            }
            dp[row][col] %= mod;
        }
    }
    cout << dp[n][x] << endl;
}


/*
Think about it 
Kind of fucking hard

EX:
4 10
4 8 5 3
5 12 8 1

0  0  0  0  0  0  0  0  0  0  0
0  0  0  0  5  5  5  5  5  5  5
0  0  0  0  5  5  5  5  12 12 12
0  0  0  0  5  8  8  8  12 13 13
0  0  0  1  5  8  8  8  12 13 13

*/


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}