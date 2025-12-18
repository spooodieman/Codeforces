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
    ll n, x, q; cin >> n >> x >> q;
    ll left, right;
    x--;
    left = right = x;
    f(i,0,q){
        ll l,r; cin >> l >> r;
        l--; r--;
        if(l > right || r < left) continue;
        left = min(left,l);
        right = max(right,r);
    }
    cout << right - left + 1 << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}