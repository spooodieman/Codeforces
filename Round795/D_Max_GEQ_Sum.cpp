#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> arr, seg1, seg2;

bool build(ll v, ll tl, ll tr) {
    if (tl == tr) {
        seg1[v] = arr[tl];
        seg2[v] = arr[tl];
        return true;
    }

    ll tm = (tl + tr) / 2;
    bool left = build(2*v, tl, tm);
    bool right = build(2*v+1, tm+1, tr);
    if (!left || !right) return false;

    seg1[v] = max(seg1[2*v], seg1[2*v+1]);
    seg2[v] = seg2[2*v] + seg2[2*v+1];

    if (seg1[v] > seg2[v]) return false;
    return true;
}

void solve() {
    ll n; cin >> n;
    arr.resize(n);
    for (auto &x : arr) cin >> x;
    seg1.assign(4*n, 0);
    seg2.assign(4*n, 0);

    cout << (build(1, 0, n-1) ? "NO\n" : "YES\n");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t; cin >> t;
    while (t--) solve();
}
