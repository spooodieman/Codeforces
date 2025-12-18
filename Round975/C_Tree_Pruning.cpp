#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define invl(v) for(auto &x: v) cin >> x;
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

set<ll> dist;
ll child;

void dfs(ll node, vector<vector<ll>> &adj, ll curr){
    ll cnt = 0;

    for(ll nei : adj[node]){
        cnt++;
        dfs(nei,adj,1+curr);
    }

    if(cnt == 0){
        child++;
        dist.insert(curr);
    }
}

void solve(ll tt = 0){
    dist.clear();
    ll n; cin >> n;
    child = 0;
    vector<vector<ll>> adj(n);
    for(ll i = 0; i < n-1; i++){
        ll x,y; cin >> x >> y;
        x--;y--;
        adj[x].push_back(y);
    }
    dfs(0,adj,0);
    cout << child - dist.size() + 1 << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}