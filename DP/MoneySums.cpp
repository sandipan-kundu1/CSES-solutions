#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int> coins;
set<int> st;
vector<vector<bool>> dp;
void f(int i,int sum)
{
    if(i<0)
    {
        st.insert(sum);
        return;
    }
    if(dp[i][sum])
    return;
    dp[i][sum]=true;
    f(i-1,sum);
    f(i-1,sum+coins[i]);
}
int32_t main()
{
    int n;
    cin>>n;
    coins.resize(n);
    int sum=0;
    for(int i=0;i<n;i++)
    {
    	cin>>coins[i];
    	sum+=coins[i];
    }
    dp.assign(n,vector<bool>(sum+1,false));
    f(n-1,0);
    st.erase(0);
    cout<<st.size()<<endl;
    for(auto i:st)
    cout<<i<<' ';
}