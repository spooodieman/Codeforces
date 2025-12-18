#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0) {
    ll n; cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];

    map<ll, ll> pos;
    vector<ll> time(n);
    for (ll i = 0; i < n; i++) {
        ll x; cin >> x;
        pos[x] = i;
    }

    for (ll i = 0; i < n; i++) 
        time[i] = pos[a[i]];
    
    ll mx = -1, ans = 0;
    
    for (ll i = 0; i < n; i++) {
        if (time[i] < mx) ans++;
        mx = max(mx,time[i]);
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
