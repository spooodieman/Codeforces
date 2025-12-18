#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> arr, seg, pref, suff, best;

void merge(ll v) {
    ll L = 2 * v, R = 2 * v + 1;
    seg[v] = seg[L] + seg[R];
    pref[v] = max({0LL, pref[L], seg[L] + pref[R]});
    suff[v] = max({0LL, suff[R], seg[R] + suff[L]});
    best[v] = max({0LL, best[L], best[R], suff[L] + pref[R]});
}

void build(ll v, ll tl, ll tr) {
    if (tl == tr) {
        seg[v] = arr[tl];
        pref[v] = suff[v] = best[v] = max(0LL, arr[tl]);
        return;
    }
    ll mid = (tl + tr) / 2;
    build(2 * v, tl, mid);
    build(2 * v + 1, mid + 1, tr);
    merge(v);
}

void update(ll v, ll tl, ll tr, ll pos, ll val) {
    if (tl == tr) {
        seg[v] = val;
        pref[v] = suff[v] = best[v] = max(0LL, val);
        return;
    }
    ll mid = (tl + tr) / 2;
    if (pos <= mid) update(2 * v, tl, mid, pos, val);
    else update(2 * v + 1, mid + 1, tr, pos, val);
    merge(v);
}

void solve() {
    ll n, q;
    cin >> n >> q;
    arr.resize(n);
    seg.resize(4 * n);
    pref.resize(4 * n);
    suff.resize(4 * n);
    best.resize(4 * n);

    for (ll i = 0; i < n; i++) cin >> arr[i];

    build(1, 0, n - 1);

    cout << best[1] << '\n';
    while (q--) {
        ll k, x;
        cin >> k >> x;
        update(1, 0, n - 1, k - 1, x);
        cout << best[1] << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
