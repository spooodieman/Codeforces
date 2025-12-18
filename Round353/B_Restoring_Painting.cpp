#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n,a,b,c,d; cin >> n >> a >> b >> c >> d;
    ll ans = 0;
    for(ll x = 1; x <= n; x++){
        ll y = x + b - c;
        ll z = x + a - d;
        ll w = a + y - d;
        if(y >= 1 && y <= n && z >= 1 && z <= n && w >= 1 && w <= n) ans++;
    }
    cout << ans * n << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    //cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}