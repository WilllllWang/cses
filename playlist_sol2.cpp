#include <bits/stdc++.h>
 
 
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
 
 
void solve() { 
    // Input
    int n; cin >> n;
    vector<int> v(n);
    for (auto& x: v) cin >> x;


    //auto start = chrono::steady_clock::now();
    // Start
     

    int res = 0;
    int low = 0;
    set<int> s;
    for (int high = 0; high < n; high++) {
        if (s.count(v[high]) < 1) {
            s.insert(v[high]);
        }
        else {
            while (v[low] != v[high]) {
                s.erase(v[low]);
                low++;
            }
            low++;
        } 
        res = max(res, high - low + 1);
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