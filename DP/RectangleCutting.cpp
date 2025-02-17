#include <bits/stdc++.h>
using namespace std;
#define int long long

const int MAXN = 501;
int dp[MAXN][MAXN];

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b;
    cin >> a >> b;
    
    for (int i = 0; i <= a; i++) {
        for (int j = 0; j <= b; j++) {
            if (i == j) dp[i][j] = 0;
            else dp[i][j] = 1e9;
        }
    }
    
    for (int height = 1; height <= a; height++) {
        for (int width = 1; width <= b; width++) {
            if (height == width) continue;
            
            for (int cut = 1; cut <= height/2; cut++) {
                dp[height][width] = min(dp[height][width], 
                    dp[cut][width] + dp[height-cut][width] + 1);
            }
            
            for (int cut = 1; cut <= width/2; cut++) {
                dp[height][width] = min(dp[height][width], 
                    dp[height][cut] + dp[height][width-cut] + 1);
            }
            
            dp[width][height] = dp[height][width];
        }
    }
    
    cout << dp[a][b] << "\n";
    return 0;
}