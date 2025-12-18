#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f(p,q,n) for(ll p = q; p < n; p++)

void solve(ll tt = 0){
    ll n; cin >> n;
    n--;
    while(true){
        cout << n-- << " ";
        if((n&(n+1)) == 0)break;
    }
    cout << 0 << " ";
    f(i,1,n+1) cout << i << " ";
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}