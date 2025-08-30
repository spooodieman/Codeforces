#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define f(p,q,n) for(ll p = q; p < n; p++)
#define vi vector<ll>

void solve(ll tt = 0){
    ll n; cin >> n;
    vi arr(n); invl(arr);
    vi bits(30,0);
    f(i,0,n){
        f(j,0,30){
            bits[j] += (((1LL << j)&arr[i])?1:0);
        }
    }
    ll ans = 0;
    ll mult = 1;
    f(i,0,30){
        if(bits[i] == n) ans += mult;
        mult *= 2;
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}