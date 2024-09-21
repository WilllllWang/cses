#include <bits/stdc++.h>
 
 
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
const int ub = 1e9 + 1;
 
void solve() { 
    int n, x;
    cin >> n >> x;
    vector<ll> nums(n);
    for (auto& y: nums) cin >> y;

    if (n < 2) {
        if (x == nums[0]) cout << 1 << '\n';
        else cout << 0 << '\n';
        return;
    }

    int i = 0, j = 0;
    ll curSum = nums[j];
    int res = 0;
    while (j < n) {
        if (curSum < x) {
            j++;
            curSum += nums[j];
        }
        else if (curSum > x) {
            curSum -= nums[i];
            i++;
        }
        else {
            res++;
            j++;
            if (j < n) curSum += nums[j];
        }
    }
    cout << res << '\n';
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
 