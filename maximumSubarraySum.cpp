#include <bits/stdc++.h>
 

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
const int lb = -1e9 - 1;



void solve() { 
    int n; cin >> n;
    ll res = lb, cur = lb;
    for (int i = 0; i < n; i++) {
        ll x; cin >> x;
        cur = max(x, cur + x);
        res = max(res, cur);
    }
    cout << res << endl;
}


void testTime() {
    auto start = chrono::system_clock::now();
    solve();
    auto end = chrono::system_clock::now();
    auto elapsed = end - start;
    cout << "Total time: " << elapsed.count() << endl;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) {
        //testTime();
        solve();
    }
    

    return 0;
}



