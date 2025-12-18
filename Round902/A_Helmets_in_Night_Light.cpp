#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--) {
        ll n, r;
        cin >> n >> r;

        vector<pair<ll, ll>> v(n);
        for (ll i = 0; i < n; i++) cin >> v[i].second;
        for (ll i = 0; i < n; i++) cin >> v[i].first;

        sort(v.begin(), v.end());

        ll rem = n - 1;
        ll total = r;

        for (ll i = 0; i < n; i++) {
            if (v[i].first >= r) break;
            ll cnt = min(rem, v[i].second);
            total += cnt * v[i].first;
            rem -= cnt;
        }

        total += r * rem;
        cout << total << "\n";
    }

    return 0;
}
