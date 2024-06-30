#include <bits/stdc++.h>
    
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;

void solve() {
    int n; 
    cin >> n;
    vector<ll> dp(n+1, 0);
    dp[0] = 1;
    for (int i = 1; i <= n; i++) {
        if (i > 6) {
            for (int j = i - 6; j < i; j++) {
                dp[i] += dp[j];
            }
        }
        else {
            for (int j = 0; j < i; j++) {
                dp[i] += dp[j];
            }
        }
        dp[i] %= mod;   // Mod every answer according to problem statement
    }
    cout << dp[n] << endl;
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




