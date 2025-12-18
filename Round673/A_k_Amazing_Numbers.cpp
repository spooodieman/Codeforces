#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n; cin >> n;
    vector<ll> arr(n);
    for (auto &x : arr) cin >> x;

    unordered_map<ll, ll> last, maxgap;

    for (ll i = 0; i < n; i++) {
        if (last.count(arr[i]))
            maxgap[arr[i]] = max(maxgap[arr[i]], i - last[arr[i]]);
        else
            maxgap[arr[i]] = max(maxgap[arr[i]], i + 1);
        last[arr[i]] = i;
    }

    for (auto &[x, pos] : last)
        maxgap[x] = max(maxgap[x], n - pos);

    vector<ll> ans(n, -1);
    vector<ll> minVal(n + 2, LLONG_MAX);

    for (auto &[x, g] : maxgap)
        if (g <= n)
            minVal[g] = min(minVal[g], x);

    ll mn = LLONG_MAX;
    for (ll i = 1; i <= n; i++) {
        mn = min(mn, minVal[i]);
        ans[i - 1] = (mn == LLONG_MAX ? -1 : mn);
    }

    for (ll i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t; cin >> t;
    while (t--) solve();
}
