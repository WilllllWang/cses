#include <bits/stdc++.h>
 

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;


void solve() { 
    int n; cin >> n;
    set<int> seen;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (seen.count(x) < 1) {
            seen.insert(x);
        }
    }
    cout << seen.size() << endl;
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
