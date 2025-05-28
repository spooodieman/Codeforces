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

ll bit(ll x){
    ll ans= 0;
    while(x){
        ans += (x&1);
        x >>= 1;
    }
    return ans;
}

void solve(ll tt = 0){
    ll n,x; cin >> n >> x;
    ll bits = bit(x);
    if(n <= bits) cout << x << '\n';
    else if((n-bits)%2==0)cout << x + n -bits << '\n';
    else if(x > 1) cout << x + n - bits+1 << '\n';
    else if(n == 1) cout << -1 << '\n';
    else cout << n+3 << '\n';
    
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}