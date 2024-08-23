#include <bits/stdc++.h>
 

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;


void solve() { 
    int n;
    ll x;
    cin >> n >> x;
    vector<ll> weights(n);
    for (auto& w: weights) cin >> w;
    sort(weights.begin(), weights.end());

    int l = 0;
    int r = n - 1;
    int res = 0;
    while (l <= r) {
        if (weights[l] + weights[r] > x) {
            res++;
            r--;
        }

        else {
            res++;
            l++;
            r--;
        }
    }
    cout << res << endl;
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
