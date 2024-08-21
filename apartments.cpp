#include <bits/stdc++.h>
 

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;


void solve() { 
    int n, m;
    ll k;
    cin >> n >> m >> k;

    vector<ll> desired(n);
    vector<ll> actual(m);
    for (auto& x: desired) cin >> x;
    for (auto& x: actual) cin >> x;
    sort(desired.begin(), desired.end());
    sort(actual.begin(), actual.end());

    int res = 0;
    int i = 0, j = 0;
    while (i < n && j < m) {
        if ((desired[i] >= actual[j] - k) && (desired[i] <= actual[j] + k)) {
            i++;
            j++;
            res++;
        }
        else if (desired[i] > actual[j]) j++;
        else i++;
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
