#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    queue<int> q;
    for(int i=1;i<=n;i++) 
    q.push(i);
    vector<int> ans;
    while(!q.empty())
    {
        q.push(q.front());
        q.pop();
        ans.push_back(q.front());
        q.pop();
    }
    for(int x:ans) 
    cout<<x<<" ";
}
