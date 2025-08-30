#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()
#define f(p,q,n) for(ll p = q; p < n; p++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define vi vector<ll>

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n,k; cin     >> n >> k;
    ll l = 1;
    ll r = 2 * n-1;
    ll ans = 1;
    while(l <= r){
        ll mid = l + (r-l)/2;
        if(mid <= n){
            ll curr = mid * (mid+1)/2;
            if(curr - mid >= k){
                r = mid-1;
            }
            else{
                ans = mid;
                l = mid+1;
            }
            continue;
        }
        ll lower = (2 * n - 1) - mid;
        ll curr = n*n - (lower * (lower+1)/2);
        if(curr - lower > k){
            r = mid-1;
        }
        else{
            ans = mid;
            l = mid+1;
        }
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}