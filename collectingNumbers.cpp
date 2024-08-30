#include <bits/stdc++.h>
 

using namespace std;
using ll = long long;
const int mod = 1e9 + 7;


// If num - 1 occurs after num, then one extra round needed
void solve() { 
    int n; cin >> n;
    int res = 0;
    unordered_set<int> seen;
    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        if (seen.count(num - 1) < 1) res++;
        seen.insert(num);
    }

    cout << res << endl;
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




    