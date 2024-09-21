#include <bits/stdc++.h>
 
 
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
const int ub = 1e9 + 1;
 
void solve() { 
    int n, x;
    cin >> n >> x;
    if (n < 4) {
        cout << "IMPOSSIBLE";
        return;
    }
    vector<pair<ll, int>> nums;
    for (int i = 0; i < n; i++) {
        ll y; cin >> y;
        nums.push_back(make_pair(y, i + 1));
    }
    sort(nums.begin(), nums.end());
    

    for (int i = 0; i < n - 3; i++) {
        for (int j = i + 1; j < n - 2; j++) {
            int k = j + 1, l = n - 1;
            ll target = x - nums[i].first - nums[j].first;
            //cout << target << '\n';
            while (k < l) {
                ll total = nums[k].first + nums[l].first;
                if (total > target) l--;
                else if (total < target) k++;
                else {
                    cout << nums[i].second << ' ' << nums[j].second << ' ' << nums[k].second << ' ' << nums[l].second << '\n';
                    return;
                }
            }
            //cout << i << ' ' << j << ' ' << k << ' ' << l << '\n';
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
 