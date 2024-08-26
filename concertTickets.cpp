#include <bits/stdc++.h>
 

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;


void solve() { 
    int n, m;
    cin >> n >> m;
    multiset<int> tickets;
    
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        tickets.insert(x);
    }

    // Use iterator to find greatest value less than or equal to target
    for (int i = 0; i < m; i++) {
        int c; cin >> c;
        multiset<int>::iterator it;
        it = tickets.upper_bound(c);
        
        // If no solution
        if (it == tickets.begin()) cout << -1 << endl;
        else {
            cout << *(--it) << endl;
            tickets.erase(it);
        }
    }
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
