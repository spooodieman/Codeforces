#define ar anmolrai
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n; cin >> n;
    vector<ll> arr(n);
    for(ll i = 0; i < n; i++) cin >> arr[i];
    for(ll i = 0; i < n ; i++){
        ll x; cin >> x;
        arr[i] = x - arr[i];
    }
    sort(all(arr));
    reverse(all(arr));
    
    ll ans = 0;
    ll r = n-1;
    for(ll l = 0; l < n; l++){
        while(r > l && arr[l] + arr[r] < 0){
            r--;
        }
        if(r <= l) break;
        ans++;
        r--;
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}