#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int n,x;
    cin>>n>>x;
    vector<int> price(n),pages(n);
    for(int i=0;i<n;i++)
    cin>>price[i];
    for(int i=0;i<n;i++)
    cin>>pages[i];
    vector<int> prev(x+1,0),cur(x+1,0);
    for(int j=0;j<=x;j++)
    {
        if(price[0]<=j)
        prev[j]=pages[0];
    }
    cur=prev;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<=x;j++)
        {
            int nottake=prev[j];
            int take=0;
            if(price[i]<=j)
            take= pages[i]+ prev[j-price[i]];
            cur[j]=max(take,nottake);
        }
        prev=cur;
    }
    cout<<prev[x];
}