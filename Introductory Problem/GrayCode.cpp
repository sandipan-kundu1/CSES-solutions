#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<0<<endl;
        cout<<1<<endl;
        return 0;
    }
    vector<string> arr;
 
    arr.push_back("0");
    arr.push_back("1");
 
    int i, j;
    for (i = 2; i < (1<<n); i = i<<1)
    {
        for (j = i-1 ; j >= 0 ; j--)
            arr.push_back(arr[j]);
 
        for (j = 0 ; j < i ; j++)
            arr[j] = "0" + arr[j];
 
        for (j = i ; j < 2*i ; j++)
            arr[j] = "1" + arr[j];
    }
    for (i = 0 ; i < arr.size() ; i++ )
        cout << arr[i] << endl;
}