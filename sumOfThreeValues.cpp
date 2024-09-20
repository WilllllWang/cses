#include <bits/stdc++.h>
 
 
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
const int ub = 1e9 + 1;
 
void solve() { 
    int n, x;
    cin >> n >> x;
    vector<pair<ll, int>> nums;
    for (int i = 0; i < n; i++) {
        ll y; cin >> y;
        nums.push_back(make_pair(y, i + 1));
    }
    sort(nums.begin(), nums.end());
 
    for (int i = 0; i < n - 2; i++) {
        int j = i + 1, k = n - 1;
        ll target = x - nums[i].first;
 
        while (j < k) {
            ll total = nums[j].first + nums[k].first;
            if (total > target) k--;
            else if (total < target) j++;
            else {
                cout << nums[i].second << ' ' << nums[j].second 
                << ' ' << nums[k].second << '\n';
                return;
            }
        }
    }
    cout << "IMPOSSIBLE\n";
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
 