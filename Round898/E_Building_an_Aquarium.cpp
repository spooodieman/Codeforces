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
    ll n,x; cin >> n >> x; 
    vi arr(n,0); invl(arr);
    ll l = 1;
    ll r = 2e9;
    ll ans = 0;
    while(l<=r){
        ll mid = l + (r-l)/2;
        ll curr = 0;
        f(i,0,n){
            curr += max(mid - arr[i], 0LL);
        }
        if(curr > x){
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