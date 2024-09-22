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

    ll curSum = 0;
    ll res = 0;
    map<ll, ll> subSums; 
    subSums[0]++;
    for (auto& z: nums) {
        curSum += z;
        res += subSums[curSum - x];
        subSums[curSum]++; 
        // subarray sum from i to j = subSum[j] - subSum[i - 1]
        // Meaning if curSum - target is in subSums, then it will be a solution
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
 