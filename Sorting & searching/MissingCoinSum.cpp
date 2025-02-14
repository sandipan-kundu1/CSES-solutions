#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a.begin(),a.end());
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>sum+1)
        break;
        sum+=a[i];
    }
    cout<<sum+1;
}