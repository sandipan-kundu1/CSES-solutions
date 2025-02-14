#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    vector<ll> a(n+1);
    for(ll i=1;i<=n;i++)
    cin>>a[i];
    vector<ll> ind(n+1);
    for(ll i=1;i<=n;i++)
    {
        ind[a[i]]=i;
    }
    ll round=1;
    for(ll i=2;i<=n;i++)
    {
        if(ind[i]<ind[i-1])
        round++;
    }
    cout<<round<<endl;
}