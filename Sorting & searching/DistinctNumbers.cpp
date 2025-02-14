#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    vector<ll> nums(n);
    for(ll i=0;i<n;i++)
    cin>>nums[i];
    sort(nums.begin(),nums.end());
    auto it= unique(nums.begin(),nums.end());
    nums.resize(distance(nums.begin(),it));
    cout<<nums.size()<<endl;
}
