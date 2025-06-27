#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()
#define fl(p,n) for(ll p = 0; p < n; p++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define vi vector<ll>

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n,k; cin >> n >> k;
    vi arr(n); invl(arr);
    for(ll i = 0; i < 63; i++){
        ll bit = 1LL << i;
        for(ll &j : arr){
            if(bit > k) break;
            if((bit & j) == 0){
                j += bit;
                k -= bit;
            }
        }
    }
    ll ans = 0;
    for(ll i : arr){
        ans += __builtin_popcountll(i);
    }
    
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}