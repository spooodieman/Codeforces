#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll count_not_divisible(ll n) {
    if (n <= 0) return 0;
    vector<ll> primes = {2, 3, 5, 7};
    ll bad = 0;
    int m = primes.size();
    for (int mask = 1; mask < (1 << m); mask++) {
        ll prod = 1, bits = 0;
        for (int i = 0; i < m; i++) {
            if (mask & (1 << i)) {
                prod *= primes[i];
                bits++;
            }
        }
        ll cnt = n / prod;
        if (bits % 2) bad += cnt;
        else bad -= cnt;
    }
    return n - bad;
}

void solve() {
    ll a, b;
    cin >> a >> b;
    cout << count_not_divisible(b) - count_not_divisible(a - 1) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) solve();
}
