#define AR AnmolRai
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) (v).begin(), (v).end()

const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(ll tt = 0){
    ll n,m; cin >> n >> m;
    vector<vector<ll>> adj(n);
    for(ll i = 0; i < m; i++){
        ll x,y; cin >> x >> y;
        x--;y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    ll xans = 0, yans = 0;
    ll leaf = 0;
    for(ll i = 0; i < n; i++){
        if(adj[i].size() == 1){
            yans = adj[adj[i].front()].size() - 1;
            leaf = adj[i].front();
            break;
        }
    }
    for(ll nei : adj[leaf]){
        if(adj[nei].size() != 1){
            xans = adj[nei].size();
            break;
        }
    }
    cout << xans << " " << yans << '\n';

}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++)
        solve(i);
}