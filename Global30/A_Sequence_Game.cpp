#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n; cin >> n;
    vector<ll> arr(n); for(ll &i : arr) cin >> i;
    ll x; cin >> x;
    ll mn = *min_element(all(arr));
    ll mx = *max_element(all(arr));
    if(x >= mn && x <= mx) cout << "YES\n";
    else cout << "NO\n";
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}