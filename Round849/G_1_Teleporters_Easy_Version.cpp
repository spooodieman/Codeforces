#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()
#define f(p,q,n) for(ll p = q; p < n; p++)
#define vi vector<ll>

void solve(ll tt = 0){
    ll n,k; cin >> n >> k;
    vi arr(n); invl(arr);
    for(ll i = 1; i <= n; i++) arr[i-1] += i;
    ll ans = 0;
    sort(all(arr));
    for(ll i = 0; i < n; i++){
        if(k - arr[i] < 0) break;
        ans++;
        k-= arr[i];
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}