#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define invl(v) for(auto &x: v) cin >> x;

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve() {
    ll n, q;
    cin >> n >> q;
    vector<ll> arr(n);
    invl(arr);
    
    vector<ll> positions(n + 1);
    for (ll i = 0; i < n; ++i) {
        positions[arr[i]] = i + 1;
    }
    for(ll i = 0; i < q; i++){
        ll l, r, x;
        cin >> l >> r >> x;
        ll target = positions[x];
        if (target < l || target > r) {
            cout << -1 << " ";
            continue;
        }
        ll lower = 0, higher = 0, operations = 0, lowerOp = 0, higherOp = 0;
        while (l <= r) {
            ll mid = (l + r) / 2;
            if (mid == target) break;
            else if (mid < target) {
                l = mid + 1;
                if (arr[mid - 1] < x) lower++;
                else {
                    operations++;
                    lowerOp++;
                }
            } 
            else {
                r = mid - 1;
                if (arr[mid - 1] > x) higher++;
                else {
                    operations++;
                    higherOp++;
                }
            }
        }
        ll adjustment = abs(lowerOp - higherOp);
        if (operations > (n - x - higher) || operations > (x - 1 - lower)) {
            cout << -1 << " ";
        } 
        else {
            cout << operations + adjustment << " ";
        }
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
