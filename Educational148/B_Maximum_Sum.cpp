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
    ll n,k; cin >> n >> k;
    vi arr(n); invl(arr);
    sort(all(arr));
    vi pref(k,0);
    ll sum = 0;
    f(i,0,n) sum += arr[i];
    for(ll i = 0; i < 2 * k ; i+= 2){
        if(i == 0){
            pref[i/2] = arr[i] + arr[i+1];
        }
        else{
            pref[i/2] = pref[i/2-1] + arr[i] + arr[i+1]; 
        }
    }
    ll kcop = k;
    vi suf(kcop);
    for (ll i = 0; i < kcop; i++) {
        if (i == 0) suf[i] = arr[n-1];
        else suf[i] = suf[i-1] + arr[n-1-i];
    }
    ll storage = LLONG_MAX;
    for (ll i = 0; i <= kcop; i++) {
        ll sufPart = (kcop - i > 0 ? suf[kcop - i - 1] : 0); 
        ll prefPart = (i > 0 ? pref[i - 1] : 0);
        ll curr = sufPart + prefPart;
        storage = min(storage, curr);
    }
    
    cout << sum - storage << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}