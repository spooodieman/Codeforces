#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){  
    ll n,k,a,b; cin >> n >> k >> a >> b;
    vector<ll> x(n+1),y(n+1);
    for(ll i = 1; i <= n ; i++) cin >> x[i] >> y[i];
	ll ans = llabs(x[a] - x[b]) + llabs(y[a] - y[b]);
    ll mins = INF, mint = INF;
	for (int i = 1; i <= k; i++) {
		mins = min(mins, llabs(x[a] - x[i]) + llabs(y[a] - y[i]));
		mint = min(mint, llabs(x[b] - x[i]) + llabs(y[b] - y[i]));
	}
	ans = min(ans, mins + mint);
	cout << ans << '\n';
	return;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}