#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,x;
    cin>>n>>x;
    vector<ll> p(n);
    for(ll i=0;i<n;i++)
    cin>>p[i];
    sort(p.begin(),p.end());
    ll i=0,j=n-1,count=0;
    while(i<=j)
    {
        if(p[i]+p[j]<=x)
        {
            count++;
            i++;
            j--;
        }
        else if(p[j]<=x)
        {
            count++;
            j--;
        }
        else
        {
            count++;
            i++;
        }
    }
    cout<<count<<endl;
}