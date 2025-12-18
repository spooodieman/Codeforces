#define AR AnmolRai
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n; cin >> n;
    vector<ll> arr(n);
    for(ll &i : arr) cin >> i;
    vector<ll> pref(n),suff(n);

    for(ll i = 0; i < n; i++){
        pref[i] = arr[i] + (n-i-1);
        suff[i] = arr[i] + i;
    }

    for(ll i = 1; i < n; i++){
        pref[i] = max(pref[i-1],pref[i]);
    }
    for(ll i = n-2; i >= 0; i--){
        suff[i] = max(suff[i+1],suff[i]);
    }

    ll ans = 2e9;
    for(ll i = 0; i < n ; i++){
        ll curr = arr[i];
        if(i > 0) curr = max(curr,pref[i-1]);
        if(i < n-1) curr = max(curr,suff[i+1]);
        ans = min(ans,curr);
    }
    cout << ans << '\n';
   
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    //cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}