#include <bits/stdc++.h>
using namespace std;

void solve(){
    long x,y;
    cin >> x >> y;
    long maxElem = max(x,y);
    long answer = maxElem+1;
    cout << answer << '\n';

}

int main(){
    long limit;
    cin >> limit;
    for(long i = 0; i < limit; i++) solve();
}