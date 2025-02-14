#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int l=0,r=1,maxlen=1;
    while(r<s.size()){
        if(s[r]==s[l]){
            maxlen=max(maxlen,r-l+1);
            r++;
        }
        else{
            l=r;
            r++;
        }
    }
    cout<<maxlen;
}