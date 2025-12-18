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
    vi dp(n,1);
    for(ll i = n-2; i >= 0; i--){
        if(arr[i+1] * 2 > arr[i]){
            dp[i] = 1 + dp[i+1];
        }
    }

    bool flag = false;
    ll ans = 0;
    f(i,0,n){
        if(!flag && dp[i] - k > 0){
            ans += max(0LL,dp[i]-k);
            flag = true;
        }
        else if(dp[i] - k <= 0){
            flag = false;
        }
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve();
}