#define AR AnmolRai
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n,l,r; cin >> n >> l >> r;
    vector<ll> arr(n); for(auto &i : arr) cin >> i;
    sort(all(arr));
    ll ans = 0;
    for(ll i = 0; i < n; i++){
        auto it1 = lower_bound(arr.begin() , arr.end(), l - arr[i]);
        auto it2 = upper_bound(arr.begin() , arr.end(), r - arr[i]);
        ans += it2 -it1;
        if (l <= 2 * arr[i] && 2 * arr[i] <= r) {
            ans--;
        }
    }
    cout << ans/2 << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}