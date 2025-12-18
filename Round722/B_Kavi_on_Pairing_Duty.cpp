#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 998244353;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){   
    vector<ll> dp(1e6 + 1);
    dp[0] = 1;
    for(ll i = 1; i <= 1e6; i++){
        for(ll j = i + i; j <= 1e6; j+= i){
            dp[j]++;
        }
    }
    ll s = 1;
    for(ll i = 1; i <= 1e6; i++){
        dp[i] = (dp[i] + s)%mod;
        s = (s + dp[i])%mod;
    }   
    ll n; cin >> n;
    cout << dp[n];
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    //cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}