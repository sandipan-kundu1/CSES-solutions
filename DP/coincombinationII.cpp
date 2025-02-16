#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD=1e9 +7;
int32_t main()
{
    int n,x;
    cin>>n>>x;
    vector<int> coins(n);
    for(int i=0;i<n;i++)
    cin>>coins[i];
    vector<int> dp(x+1,0);
    dp[0]=1;

    for(int i=0;i<n;i++)
    {
        for(int j=coins[i];j<=x;j++)
        {
            int notpick=dp[j];
            int pick=dp[j-coins[i]];
            dp[j]=(pick+notpick)%MOD;
        }
    }
    cout<<dp[x];
}