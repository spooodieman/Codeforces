#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;

void solve() {
    ll n; 
    cin >> n;
    vector<ll> a(n + 1);
    for (ll i = 1; i <= n; i++) cin >> a[i];

    vector<ll> res;

    for (ll i = 0; i < n; i++) {
        ll diff = a[i + 1] - a[i];
        if (i - diff >= 0)
            res.push_back(res[i - diff]);
        else
            res.push_back(i + 1);
    }

    for (ll x : res) cout << x << " ";
    cout << "\n";
}

int main() {

     ll t; 
    cin >> t;
    while (t--) solve();
}
