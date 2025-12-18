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
const ll INF = 2e18;

void solve(ll tt = 0){
    ll a,b,c; cin >> a >> b >> c;
    ll worker = 1;
    ll ans = 1e18;
    for(ll i = 0; i < 32; i++, worker *= 2){
        ll cost = a * i;
        cost += ((c + worker -1)/worker) * b;
        ans = min(ans,cost); 
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}