#include <bits/stdc++.h>
    
using namespace std;
using ll = long long;


int greatest(int n) {
    int res = 0;
    while (n > 0) {
        res = max(res, n % 10);
        n /= 10;
    }
    return res;
}


void solve() {  // Not dp!!!!!!!!!!!!!!
    int n; 
    cin >> n;
    int res = 0;
    while (n > 0) {
        int sub = greatest(n);
        n -= sub;
        res++;
    }
    cout << res << endl;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}




