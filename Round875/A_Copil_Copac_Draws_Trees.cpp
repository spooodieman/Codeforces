#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

vector<ll> dp(2e5+1),id(2e5+1);
vector<pair<int,int>> adj[(ll)2e5+1];

void dfs(ll node){
    for(auto nei : adj[node]){
        if(dp[nei.first] == 0){
            dp[nei.first] = dp[node] + (nei.second <= id[node]);
            id[nei.first] = nei.second;
            dfs(nei.first);
        }
    }
}

void solve(ll tt = 0){
    ll n; cin >> n;
    for(ll i = 1; i <= n; i++){
        dp[i] = id[i] = 0;
        adj[i].clear();
    }
    for(ll i = 1; i< n; i++){
        ll x,y; cin >> x >> y;
        adj[x].push_back({y,i});
        adj[y].push_back({x,i});
    }
    dp[1] = 1;
    dfs(1);
    ll ans = 0;
    cout << *max_element(dp.begin() + 1 , dp.begin() + n + 1) << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}