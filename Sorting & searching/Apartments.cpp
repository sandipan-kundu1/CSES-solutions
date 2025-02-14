#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> applicants(n), apartments(m);

    for (int i = 0; i < n; i++)
        cin >> applicants[i];
    for (int i = 0; i < m; i++)
        cin >> apartments[i];

    sort(applicants.begin(), applicants.end());
    sort(apartments.begin(), apartments.end());

    int i = 0, j = 0, count = 0;
    while (i < n && j < m)
    {
        if (apartments[j] < applicants[i] - k)
            j++;
        else if (apartments[j] > applicants[i] + k)
            i++;
        else
        {
            count++;
            i++;
            j++;
        }
    }

    cout << count << " ";
    return 0;
}