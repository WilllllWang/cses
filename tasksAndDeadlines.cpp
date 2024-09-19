#include <bits/stdc++.h>
 
 
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
const int ub = 1e9 + 1;
 
void solve() { 
    int n; cin >> n;
    vector<pair<ll, ll>> vp;
    for (int i = 0; i < n; i++) {
        ll a, d; 
        cin >> a >> d;
        vp.push_back(make_pair(a, d));
    }
    sort(vp.begin(), vp.end());

    ll res = 0, time = 0;
    for (auto& x: vp) {
        time += x.first;
        res += (x.second - time);
    }
    cout << res << '\n';
}

 
void testTime() {
    auto start = chrono::steady_clock::now();
    auto end = chrono::steady_clock::now();
    cout << "Total time = " << chrono::duration_cast<std::chrono::microseconds>(end - start).count() << "(micro)" << endl;
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