#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long
#define f(i,a,b) for(ll i = a; i < b; i++)
#define vi vector<ll>
#define all(v) (v).begin(), (v).end()

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    ll n; cin >> n;
    vector<pair<ll,ll>> arr(n);
    f(i,0,n){
        ll x,y; cin >> x >> y;
        arr[i] = {y,x};
    }

    sort(all(arr));
    ordered_set<ll> os;
    ll ans = 0;

    for (auto &p : arr) {
        ans += os.size() - os.order_of_key(p.second + 1);
        os.insert(p.second);
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t; cin >> t;
    while (t--) solve();
}
