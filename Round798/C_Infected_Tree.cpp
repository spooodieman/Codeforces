#define AR AnmolRai
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

vector<ll> child;
ll ans;

void dfs(vector<vector<ll>>& adj, ll node, ll parent){
    child[node] = 0;

    for(ll nei : adj[node]){
        if(nei == parent) continue;
        dfs(adj,nei,node);
        child[node] += 1 + child[nei];
    }
}

void dfs2(vector<vector<ll>>& adj, ll node, ll parent){
    ll leftnode = -1;
    ll left = 0;
    ll rightnode = -1;
    ll right = 0;
    for(ll nei : adj[node]){
        if(nei == parent) continue;
        if(leftnode == -1){
            leftnode = nei;
            left = child[nei];
        }
        else if(rightnode == -1){
            rightnode = nei;
            right = child[nei];
        }
    }
    if(leftnode == -1 && rightnode == -1) return;
    if(rightnode == -1){
        ans += left;
        return;
    }
    if(left > right){
        ans += left;
        dfs2(adj,rightnode,node);
    }
    else{
        ans += right;
        dfs2(adj,leftnode,node);
    }
}

void solve(ll tt = 0){
    ll n; cin >> n;
    child.resize(n);
    ans = 0;
    vector<vector<ll>> adj(n);
    for(ll i = 0; i < n-1; i++){
        ll x,y; cin >> x >> y;
        x--; y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(adj,0,-1);
    dfs2(adj,0,-1);
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}