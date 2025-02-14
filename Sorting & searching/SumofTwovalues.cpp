#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,x;
    cin>>n>>x;
    vector<pair<ll,ll>> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i].first;
        a[i].second=i+1;
    }
    sort(a.begin(),a.end());
    ll i=0,j=n-1;
    int flag=0;
    while(i<j)
    {
        if(a[i].first+a[j].first==x)
        {
            cout<<min(a[i].second,a[j].second)<<" "<<max(a[i].second,a[j].second)<<endl;
            flag=1;
            return 0;
        }
        else if(a[i].first+a[j].first<x)
        i++;
        else 
        j--;
        
    }
    if(flag==0)
    cout<<"IMPOSSIBLE"<<endl;
}