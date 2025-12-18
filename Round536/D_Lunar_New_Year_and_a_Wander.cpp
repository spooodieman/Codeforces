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
    vector<vi> adj(n);
    vector<bool> vis(n,false);
    f(i,0,k){
        ll x,y; cin >> x >> y;
        if(x == y) continue;
        x--; y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    priority_queue<ll, vector<ll>, greater<ll>> q;
    q.push(0);
    vis[0] = true;
    while(!q.empty()){
        ll node = q.top();
        q.pop();
        cout << node + 1 << " ";
        for(int nei : adj[node]){
            if(!vis[nei]){
                q.push(nei);
                vis[nei] = true;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
        solve();
}