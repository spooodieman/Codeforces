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
    ll n ; cin >> n;
    vi arr(n); invl(arr);
    ll ans = 1e9;
    f(i,1,n){
        if(arr[i] < arr[i-1]){
            cout << "0\n"; return;
        }
    }
    f(i,0,n-1){
        ll curr = ((arr[i+1]-arr[i])/2) + 1;
        ans = min(ans,curr);
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}