#include <bits/stdc++.h>
 
 
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
const int ub = 1e9 + 1;
 
void solve() { 
    // Input
    int n, t; cin >> n >> t;
    vector<int> m(n);
    for (auto& x: m) cin >> x;

    //auto start = chrono::steady_clock::now();
    // Start


    ll low = 0, high = 1e18;    // Use binary search instead of checking every time stamp
    ll res;
    while (low <= high) {
        ll mid = (low + high) / 2;
        ll sum = 0;
        for (auto& x: m) {
            sum += mid / x;
            if (sum >= t) {
                break;
            }
        }
        if (sum >= t) {
            res = mid;
            high = mid - 1;
        }
        else low = mid + 1;
    }
    cout << res << '\n';


    // End
    //auto end = chrono::steady_clock::now();
    //cout << "Total time = " << chrono::duration_cast<std::chrono::microseconds>(end - start).count() / x << "(micro)" << endl;
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