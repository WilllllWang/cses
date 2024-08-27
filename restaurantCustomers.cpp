#include <bits/stdc++.h>
 

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;


void solve() { 
    int n; cin >> n;
    vector<pair<int, int>> intervals;
    for (int i = 0; i < n; i++) {
        int start, end;
        cin >> start >> end;
        intervals.push_back({start, 0});
        intervals.push_back({end, 1});
    }
    sort(intervals.begin(), intervals.end());
    
    int res = 0; 
    int count = 0;
    for (auto& t: intervals) {
        if (t.second == 0) count++;
        else count--;
        res = max(res, count);
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



