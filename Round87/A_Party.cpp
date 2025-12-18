#define AR AnmolRai
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

ll dfs(vector<vector<ll>>& adj, ll node){
    ll ans = 1;
    for(ll nei : adj[node]){
        ans = max(ans, 1 + dfs(adj,nei));
    }
    return ans;
}

void solve(ll tt = 0){
    ll n; cin >> n;
    vector<vector<ll>> adj(n+1);
    for(ll i = 0; i < n ; i++){
        ll x; cin >> x;
        if(x == -1) continue;
        adj[x].push_back(i+1);
    }
    ll ans = 0;
    for(ll i = 1; i <= n; i++){
        ans = max(ans, dfs(adj,i));
    }
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    //cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}