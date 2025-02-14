#include <bits/stdc++.h>
using namespace std;
int N, k;
multiset<int> St;
multiset<int>::iterator it;

int main(){
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d", &k);
        it = St.upper_bound(k);
        if(it != St.end())
            St.erase(it);
        St.insert(k);
    }
    printf("%d\n", (int) St.size());
}