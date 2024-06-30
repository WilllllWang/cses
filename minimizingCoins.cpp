#include <bits/stdc++.h>
    
using namespace std;
using ll = long long;
 
 
void solve() {
    // n is number of coins
    // x is target num
    int n, x;
    cin >> n >> x;
    vector<int> coins(n);
    for (auto& c: coins) {
        cin >> c;
    }
 
    vector<int> dp(x + 1, x + 1);
    dp[0] = 0;
    for (int i = 0; i <= x; i++) {
        for (auto& c: coins)  {
            if (i + c <= x) {
                dp[i + c] = min(dp[i + c], dp[i] + 1);
            }
        }
 
    }
 
    if (dp[x] == x + 1) {
        cout << -1 << endl;
    }
    else {
        cout << dp[x] << endl;
    } 
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
 
 