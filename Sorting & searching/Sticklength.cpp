#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxN = 2e5;

int main()
{
    int N, p[maxN];
    cin>>N;
    ll median, sum = 0;
    for(int i = 0; i < N; i++)
    cin>>p[i];
    sort(p, p+N);
    median = p[(N-1)/2];
    for(int i = 0; i < N; i++)
    sum += abs(p[i]-median);
    cout<<sum;
}