#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1e9 + 7;

ll modpow(ll a, ll e) {
    ll r = 1;
    while (e) {
        if (e & 1) r = (r * a) % mod;
        a = (a * a) % mod;
        e >>= 1;
    }
    return r;
}

void solve(ll tt = 0){
    ll a,b; cin >> a >> b;
    ll ans = modpow(a,b);
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}