#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f(p,q,n) for(ll p = q; p < n; p++)
#define vi vector<ll>

const ll mod = 1e9 + 7;

void solve(ll tt = 0){
    ll n,x; cin >> n >> x;
    vector<vi> dp(x+1,vi(n+1,0));
    f(i,0,n+1)
        dp[1][i] = 1;
    for(ll i = 2; i <= x; i++)
        for(ll j = 1; j <= n; j++)
            for(ll k = j; k <= n; k += j)
                dp[i][k] = (dp[i][k] + dp[i-1][j])%mod;
    ll sum = 0;
    f(i,1,n+1)
        sum = (sum + dp[x][i])%mod;
    cout << sum;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
        solve();
}