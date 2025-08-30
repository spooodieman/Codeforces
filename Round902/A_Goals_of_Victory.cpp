#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define f(  p,q,n) for(ll p = q; p < n; p++)
#define vi vector<ll>

void solve(ll tt = 0){
    ll n; cin >> n;
    vi arr(n-1); invl(arr);
    ll ans = 0;
    f(i,0,n-1) ans += arr[i];
    cout << ans * -1 << '\n'; 
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}