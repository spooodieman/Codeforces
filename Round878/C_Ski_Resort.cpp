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
    vi seg; 
    ll n,k,q; cin >> n >> k >> q;
    ll curr = 0;
    vi arr(n); invl(arr);
    f(i,0,n){
        if(arr[i] <= q) curr++;
        else{
            if(curr >= k) seg.push_back(curr);
            curr = 0;
        }
    }
    if(curr >= k) seg.push_back(curr);
    ll ans = 0;
    for(ll x : seg) ans += (x - (k-1)) * (x - (k-1) + 1)/2;
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}