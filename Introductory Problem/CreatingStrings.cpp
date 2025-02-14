#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    vector<string> arr;
    arr.push_back(s);
    while(next_permutation(s.begin(),s.end()))
    {
        arr.push_back(s);
    }
    cout<<arr.size()<<endl;
    for(string x:arr)
    cout<<x<<endl;
    return 0;
}