#include <bits/stdc++.h>
    
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;


void solve() {
    // n is number of coins
    // x is target num
    int n, x;
    cin >> n >> x;
    vector<ll> coins(n);
    for (auto& c: coins) {
        cin >> c;
    }

    vector<ll> dp(x + 1, 0);
    dp[0] = 1;
    for (auto& c: coins) {              // Check for every coin's possible path 
        for (int i = 1; i <= x; i++) {  
            if (i - c >= 0) {
                dp[i] += dp[i - c];
                dp[i] %= mod;
            }
        } 
    }
    cout << dp[x] << endl;
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




