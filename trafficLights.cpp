#include <bits/stdc++.h>
 
 
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
const int ub = 1e9 + 1;
 
void solve() { 
    // Input
    int x, n;
    cin >> x >> n;
    vector<int> lights(n);
    for (auto& l: lights) cin >> l;


    //auto start = chrono::steady_clock::now();
    // Start

    set<int> l{0, x};
    multiset<int> len{x};
    for (auto& cur: lights) {
        auto end = l.upper_bound(cur);
        auto start = end;
        start--;

        len.erase(len.find(*end - *start));
        len.insert(cur - *start);
        len.insert(*end - cur);
        l.insert(cur);

        auto res = len.end();
        cout << *--res << '\n';
    }


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