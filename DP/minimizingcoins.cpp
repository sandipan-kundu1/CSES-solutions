#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int n,x;
    cin>>n>>x;
    vector<int> coins(n);
    for(int i=0;i<n;i++)
    cin>>coins[i];
    sort(coins.begin(),coins.end());
    vector<int> dp(x+1,1e9);
    dp[0]=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<=x;j++)
        {
            int notpick=dp[j];
            int pick=1e9;
            if(coins[i]<=j)
            pick=1+dp[j-coins[i]];
            dp[j]=min(notpick,pick);
        }
    }
    int res=dp[x];
    res>=1e9? cout<<-1 :cout<<res;
    cout<<endl;
}