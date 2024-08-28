#include <bits/stdc++.h>
 

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;


void solve() { 
    int n, x;
    cin >> n >> x;
    // Sort by value as pairs <val, pos>
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        int k; cin >> k;
        v.push_back(make_pair(k, i + 1));
    }
    sort(v.begin(), v.end());


    // Two pointers
    int low = 0, high = n - 1;
    while (low < high) {
        if (v[low].first + v[high].first > x) high--;
        else if (v[low].first + v[high].first < x) low++;
        else {
            cout << v[low].second << ' ' << v[high].second << endl;
            return;
        }
    }
    cout << "IMPOSSIBLE" << endl;
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



