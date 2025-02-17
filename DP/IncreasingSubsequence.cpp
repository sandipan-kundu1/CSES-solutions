#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int n;
    cin >> n;
    vector<int> x(n), lis;
    for (int i = 0; i < n; i++) cin >> x[i];

    for (int i = 0; i < n; i++) {
        auto it = lower_bound(lis.begin(), lis.end(), x[i]);
        if (it == lis.end()) lis.push_back(x[i]);
        else *it = x[i];
    }
    
    cout << lis.size() << endl;
}
