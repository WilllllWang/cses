#include <bits/stdc++.h>
 

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;



void solve() { 
    int n; cin >> n;
    vector<int> v(n);
    for (auto& x: v) cin >> x;
    sort(v.begin(), v.end());
    int half = n / 2;
    ll res = 0;
    for (auto& x: v) res += abs(x - v[half]);
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



