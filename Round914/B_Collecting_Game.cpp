#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()
#define f(p,q,n) for(ll p = q; p < n; p++)
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define vi vector<ll>

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n; cin >> n;
    vector<pair<ll,ll>> arr(n);
    f(i,0,n){
        ll x; cin >> x;
        arr[i] = {x,i};
    }

    vi ans(n);
    sort(all(arr));

    f(i,0,n) ans[arr[i].second] = i;
    
    vi pref(n+1,0);
    f(i,0,n){
        pref[i + 1] = pref[i] + arr[i].first;
    }
    for(ll i = n-2; i >= 0; i--){
        if(pref[i+1] >= arr[i+1].first) ans[arr[i].second] = ans[arr[i+1].second];
    }
    f(i,0,n) cout << ans[i] << " ";
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}