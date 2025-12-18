#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n; cin >> n;
    vector<ll> arr(n),cost(n); 
    for(auto &i : arr) cin >> i;
    for(auto &i : cost) cin >> i;

    ll mx = 0;
    vector<ll> dp(n,0);
    for (ll i = 0; i < n; i++) {
        dp[i] = cost[i];
        for (ll j = 0; j < i; j++) {
            if (arr[j] <= arr[i]) {
                dp[i] = max(dp[i], dp[j] + cost[i]);
            }
        }
        mx = max(mx, dp[i]);
    }

    ll tot= 0 ;
    for(ll i = 0; i < n ; i++) tot += cost[i];
    cout << tot - mx << '\n';

}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}