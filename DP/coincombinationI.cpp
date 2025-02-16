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
    for(int j=1;j<=x;j++)
    {
        for(int i=0;i<n;i++)
        {
            int notpick=dp[j];
            int pick=0;
            if(coins[i]<=j)
            pick=dp[j-coins[i]];
            dp[j]=(notpick+pick)%MOD;
        }
    }
    cout<<dp[x];
}