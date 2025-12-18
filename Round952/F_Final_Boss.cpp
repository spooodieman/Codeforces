#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n,k ; cin >> k >> n;
    vector<ll> a(n),b(n);
    for(ll &i : a) cin >> i;
    for(ll &i : b) cin >> i;
    ll l = 1;
    ll r = 1e13;
    ll ans = 1e13;
    while(l <= r){
        ll mid = l + (r-l)/2;
        ll curr = 0;
        for(ll i = 0; i < n; i++){
            curr += a[i] * ((mid + b[i]-1)/b[i]);
            if(curr >= k) break;
        }
        if(curr >= k){
            r = mid-1;
            ans = mid;
        }
        else l = mid+1;
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