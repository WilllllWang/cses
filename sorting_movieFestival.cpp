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
        intervals.push_back(make_pair(start, end));
    }
    // Lambda for sorting by second value
    sort(intervals.begin(), intervals.end(), [](auto &A, auto &B) {
        return A.second < B.second;
    });
    
    // Use greedy
    int res = 0, ptr = 0;
    for (int i = 0; i < n; i++) {
        if (intervals[i].first >= ptr) {
            res++;
            ptr = intervals[i].second;
        }
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



