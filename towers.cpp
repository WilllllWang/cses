#include <bits/stdc++.h>
 
 
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
const int ub = 1e9 + 1;
 
void solve() { 
    // Input
    int n; cin >> n;
    vector<int> v(n);
    for (auto& x: v) cin >> x;


    //auto start = chrono::steady_clock::now();
    // Start


    multiset<int> s;
    for (auto& x: v) {
        // Get smallest value that is greater than current value
        auto it = s.upper_bound(x);
        if (it != s.end()) s.erase(it);
        s.insert(x);
    }

    cout << s.size() << '\n';


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