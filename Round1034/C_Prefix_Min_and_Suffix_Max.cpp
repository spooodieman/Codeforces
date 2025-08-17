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
    vi arr(n); invl(arr);
    vi mn(n+1,1e9), mx(n+1,0);
    vi ans(n,0);
    ans[0] = 1;
    ans[n-1] = 1;
    f(i,1,n+1){
        mn[i] = min(arr[i-1],mn[i-1]);
    } 
    for(ll i = n-1; i >= 0; i--){
        mx[i] = max(mx[i+1],arr[i]);
    }
   
    f(i,1,n-1){
        if(arr[i] < mn[i] || arr[i] > mx[i+1]){
            ans[i] = 1;
        }
    }
    for(ll x : ans) cout << x;
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}