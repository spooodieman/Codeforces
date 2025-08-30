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
    ll sum = 0;
    if(accumulate(all(arr),sum));
    if(sum < k){
        cout << "-1\n";
        return;
    }
    vi pref(n+1,0);
    vi suf(n+1,0);
    f(i,1,n+1){
        pref[i] = pref[i-1] + arr[i-1];
    }
    for(ll i = n-1; i >= 0; i--){
        suf[i] = arr[i] + suf[i+1];
    }
    
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}