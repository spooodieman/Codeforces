#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n,q; cin >> n >> q;
    vector<ll> arr(n);
    for(auto &i : arr) cin >> i;

    sort(all(arr));
    vector<ll> dif(n+2,0);
    for(ll i = 0; i < q; i++){
        ll x,y; cin >> x >> y;
        dif[x]++;
        dif[y+1]--;
    }
    vector<ll> vals;
    for(ll i = 1; i < n+2; i++){
        dif[i] += dif[i-1];
        if(dif[i] > 0) vals.push_back(dif[i]);
    }
    sort(all(vals));
    ll ind = n-1;
    ll ans = 0;
    for(ll i = vals.size() - 1; i >= 0; i--){
        ans += vals[i] * arr[ind--];
    }
    cout << ans;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
        solve();
}