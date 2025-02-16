#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD=1e9+7;
int32_t main()
{
    int n;
    cin>>n;
    vector<vector<char>> grid(n,vector<char>(n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>grid[i][j];
        }
    }
    if(grid[0][0]=='*')
    cout<<0;
    else{
        vector<vector<int>> dp(n,vector<int>(n,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==0 && j==0)
                dp[0][0]=1;
                else if(grid[i][j]=='*')
                dp[i][j]=0;
                else
                {
                    int up=0,left=0;
                    if(i>0) up=dp[i-1][j];
                    if(j>0) left=dp[i][j-1];
                    dp[i][j]=(up+left)% MOD;
                }
            }
        }
        cout<<dp[n-1][n-1];
    }
    
    
}