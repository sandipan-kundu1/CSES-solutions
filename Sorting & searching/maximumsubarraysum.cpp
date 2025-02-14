#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    vector<ll> x(n);
    for(ll i=0;i<n;i++)
    cin>>x[i];
    ll r=0,maxsum=INT_MIN,sum=0;
    while(r<n)
    {
        sum+=x[r];
        maxsum=max(maxsum,sum);
        if(sum<0)
        sum=0;
        r++;

    }
    cout<<maxsum<<endl;
}