#include <bits/stdc++.h>
 
 
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
const int ub = 1e9 + 1;
 
void solve() { 
    int n;
    cin >> n;
    vector<ll> time(n);
    for (auto& x: time) cin >> x;
    sort(time.begin(), time.end());

    ll total = 0;
    for (int i = 0; i < n; i++) total += time[i];

    // If last book takes longer than all other books combined,
    // then answer would be (last book * 2)
    if (total - time[n - 1] < time[n - 1]) cout << time[n - 1] * 2 << '\n';
    // Else no waiting for either person
    else cout << total << '\n';
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

