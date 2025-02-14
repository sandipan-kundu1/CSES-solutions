#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> arr(n + 1);
    for (ll i = 1; i <= n; i++)
        cin >> arr[i];
    vector<ll> ind(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        ind[arr[i]] = i;
    }
    while (m--)
    {
        ll a, b;
        cin >> a >> b;
        swap(ind[arr[a]],ind[arr[b]]);
        //swap(arr[a],arr[b]);
        ll round = 1;
        for (ll i = 2; i <= n; i++)
        {
            if (ind[i] < ind[i - 1])
                round++;
        }
        cout << round << endl;
    }
}