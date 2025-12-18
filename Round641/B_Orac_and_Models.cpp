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
    vi dp(n,1);
    ll mx = 1;
    for(ll i = n-1; i >= 0; i--){
        for(ll j = i; j < n; j += (i+1)){
            if(arr[i] < arr[j]){
                dp[i] = max(dp[i],1+dp[j]);
                mx = max(mx,dp[i]);
            }
        }
    }
    cout << mx << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}