#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

void solve(ll tt = 0) {
    ll n, x; 
    cin >> n >> x;
    vector<ll> arr(n);
    for (auto &i : arr) cin >> i;
    sort(all(arr));
    ll l = 0, r = n - 1;
    vector<ll> ans;
    ll pref = 0, curr = pref / x, answer = 0;

    while (l <= r) {
        ll req = x - (pref % x);
        if (arr[r] >= req) {
            ll pick = arr[r--];
            pref += pick;
            if (pref / x > curr) {
                answer += pick;
                curr = pref / x;
            }
            ans.push_back(pick);
            continue;
        }
        ll pick = arr[l++];
        pref += pick;
        ans.push_back(pick);
    }
    
    cout << answer << "\n";
    for (auto i : ans) cout << i << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    for (ll i = 1; i <= t; i++) solve(i);
}
