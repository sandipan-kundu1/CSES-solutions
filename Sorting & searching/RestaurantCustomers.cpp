#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;

    vector<pair<ll, int>> events;

    for (ll i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        events.push_back({a, 1});
        events.push_back({b, -1});
    }

    sort(events.begin(), events.end());

    ll cnt = 0, maxcnt = 0;
    
    for (auto event : events)
    {
        cnt += event.second;
        maxcnt = max(maxcnt, cnt);
    }

    cout << maxcnt << endl;
}
