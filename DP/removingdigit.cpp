#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int n;
    cin>>n;
    int steps=0;
    while(n>0)
    {
        string num=to_string(n);
        int maxi=0;
        for(int i=0;i<num.size();i++)
        maxi=max(maxi,(long long)(num[i]-'0'));
        n-=maxi;
        steps++;
    }
    cout<<steps;
}