#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long sum=n*(n+1)/2;
    if(sum%2!=0)
    {
        cout<<"NO";
        return 0;
    }
    cout<<"YES"<<endl;
    long long half=sum/2;
    int i=n;
    int count=0;
    vector<long long> vis(n+1,0);
    while(half>0)
    {
        if(half-i>=0)
        {
            half-=i;
            count++;
            vis[i]=1;
        }
        i--;
    }
    cout<<count<<endl;
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==1)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    cout<<n-count<<endl;
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            cout<<i<<" ";
        }
    }
}