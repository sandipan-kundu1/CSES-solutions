#include<bits/stdc++.h>
using namespace std;
#define int long long
string s1,s2;
int n,m;

int f(int i,int j,vector<vector<int>>& dp)
{
    if(i<0 && j<0) return 0;
    if(i<0)return j+1;
    if(j<0) return i+1;
    if(dp[i][j]!=-1)
    return dp[i][j];
    if(s1[i]==s2[j])
    return dp[i][j]=0+f(i-1,j-1,dp);
    else
    {
        int add=1+f(i,j-1,dp);
        int remove=1+f(i-1,j,dp);
        int replace=1+f(i-1,j-1,dp);
        return dp[i][j]=min({add,remove,replace});
    }
}
int32_t main()
{
    
    cin>>s1>>s2;
    n=s1.length();
    m=s2.length();
    vector<vector<int>> dp(n,vector<int>(m,-1));
    cout<<f(n-1,m-1,dp);
}