#include <bits/stdc++.h>
 
 
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
const int ub = 1e9 + 1;
 
void solve() { 
    int n;
    cin >> n;
    vector<int> nums(n);
    for (auto& x: nums) cin >> x; 

    // Since if n[i] > than all of n[0] ~ n[i - 1], and n[i + 1] > n[i], 
    // then n[i + 1] would be greater than all of n[0] ~ n[i]
    // In conclusion, the popped elements would be irrelevant
    vector<pair<int, int>> stack;
    for (int i = 0; i < n; i++) {
        while (stack.size() > 0) {
            if (stack.back().first < nums[i]) {
                cout << stack.back().second << ' ';
                break;
            }
            else stack.pop_back();
        }
        if (stack.size() == 0) cout << 0 << ' ';

        stack.push_back(make_pair(nums[i], i + 1));
    }
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
 