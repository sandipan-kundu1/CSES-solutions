#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    multiset<ll> tickets;
    vector<ll> customers(m);

    for (int i = 0; i < n; i++)
    {
        ll price;
        cin >> price;
        tickets.insert(price);
    }

    for (int i = 0; i < m; i++)
    {
        cin >> customers[i];
    }

    for (ll max_price : customers)
    {
        auto it = tickets.upper_bound(max_price);
        if (it == tickets.begin())
            cout << -1 << "\n";
        else
        {
            --it;
            cout << *it << "\n";
            tickets.erase(it);
        }
    }

    return 0;
}
