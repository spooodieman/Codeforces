#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, m;
    cin >> n >> m;
    vector<pair<ll,ll>> segs(m);
    for (ll i = 0; i < m; i++) {
        ll l, r;
        cin >> l >> r;
        l--;
        segs[i] = {l, r};
    }

    ll q;
    cin >> q;
    vector<ll> ord(q);
    for (ll i = 0; i < q; i++) {
        cin >> ord[i];
        ord[i]--;
    }

    ll l = 0, r = q + 1;
    while (r - l > 1) {
        ll mid = (l + r) / 2;

        vector<ll> cur(n, 0);
        for (ll i = 0; i < mid; i++) 
            cur[ord[i]] = 1;

        vector<ll> pref(n + 1, 0);
        for (ll i = 0; i < n; i++)
            pref[i + 1] = pref[i] + cur[i];

        bool ok = false;
        for (auto &p : segs) {
            ll lft = p.first, rgt = p.second;
            if (pref[rgt] - pref[lft] > (rgt - lft) / 2) {
                ok = true;
                break;
            }
        }

        if (ok) r = mid;
        else l = mid;
    }

    if (r == q + 1) r = -1;
    cout << r << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) solve();
}
