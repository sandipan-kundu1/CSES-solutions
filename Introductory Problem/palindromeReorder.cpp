#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    if(n==1)
    {
        cout<<s;
        return 0;
    }
    unordered_map<char,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[s[i]]++;
    }
    if(n%2==0)
    {
        for(auto x:mp)
        {
            if(x.second%2!=0)
            {
                cout<<"NO SOLUTION";
                return 0;
            }
        }
        string ans="";
        for(auto x:mp)
        {
            for(int i=0;i<x.second/2;i++)
            {
                ans+=x.first;
            }
        }
        cout<<ans;
        reverse(ans.begin(),ans.end());
        cout<<ans;
    }
    else
    {
        int odd=0;
        char oddChar;
        for(auto x:mp)
        {
            if(x.second%2!=0)
            {
                odd++;
                oddChar=x.first;
            }
        }
        if(odd>1)
        {
            cout<<"NO SOLUTION";
            return 0;
        }
        string ans="";
        for(auto x:mp)
        {
            if(x.first==oddChar)
            {
                for(int i=0;i<x.second/2;i++)
                {
                    ans+=x.first;
                }
            }
            else
            {
                for(int i=0;i<x.second/2;i++)
                {
                    ans+=x.first;
                }
            }
        }
        cout<<ans;
        cout<<oddChar;
        reverse(ans.begin(),ans.end());
        cout<<ans;
    }
}