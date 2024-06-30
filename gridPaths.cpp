#include <bits/stdc++.h>
 
 
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
 
void solve() { 
    int n;
    cin >> n;
    vector<vector<int>> dp(n, vector<int>(n));
    dp[0][0] = 1;
    for (int row = 0; row < n; row++) {
        string trap;
        cin >> trap;
        for (int col = 0; col < n; col++) {
            if (row == 0 && col == 0) {
                if (trap[0] == '*') {
                    cout << 0 << endl;
                    return;
                }
                else 
                    continue;
            }
            if (trap[col] == '*') {
                dp[row][col] = 0;
            }
            else if (row == 0) {
                dp[row][col] = dp[row][col - 1];
            }    
            else if (col == 0) {
                dp[row][col] = dp[row - 1][col];
            }
            else {
                dp[row][col] = dp[row - 1][col] + dp[row][col - 1];
            }
            dp[row][col] %= mod;
        }
    }
 
    cout << dp[n - 1][n - 1] << endl;
}
 
 
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