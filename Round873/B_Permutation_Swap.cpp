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
    ll n; cin >> n;
    vi arr(n); invl(arr);
    set<ll> cand;
    f(i,0,n){
        if(arr[i] - 1- i == 0) continue;
        cand.insert(abs(arr[i] - 1 - i));
    }
    ll ans = 0;
    for(ll x : cand){
        ans = x;
        break;
    }
    for(ll x : cand) ans = __gcd(ans,x);
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}