#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long k,l1,r1,l2,r2;
    cin >> k >> l1 >> r1 >> l2 >> r2;
    long long answer = 0;
    while (l2 <= r2){
        long long temp =  min(r1,r2) - max(l1,l2) + 1;
        if(temp < 0) temp = 0;
        answer+= temp;
        l2 = (l2 + k - 1)/k;
        r2 /= k;
    }
    cout << answer << '\n';
}

int main(){
    int limit;
    cin >> limit;
    for(int i = 0; i < limit; i++) solve();
    return 0;
}